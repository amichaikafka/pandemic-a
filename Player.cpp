#include "Player.hpp"

using namespace std;
using namespace pandemic;

Player::Player(Board &board, City city) : _board(board), _location(city) {}



Player &Player::drive(City city)
{
    cityData curr = this->_board.get_cityData(this->_location);
    if (curr.neighbors.count(city) == 0)
    {
        throw std::invalid_argument("Can drive only to neighbors of "+curr.name);
    }
    this->_location = city;

    return *this;
}

Player &Player::fly_direct(City city)
{
 cityData c = this->_board.get_cityData(city);   
    if (this->_cards.count(city) == 0)
    {
        throw std::invalid_argument("missing city card of "+c.name);
    }
    this->_location = city;
    this->_cards.erase(city);

    return *this;
}

Player &Player::fly_charter(City city)
{
    cityData curr = this->_board.get_cityData(this->_location);
    if (this->_cards.count(this->_location) == 0)
    {
        throw std::invalid_argument("missing city card of "+curr.name);
    }
    this->_location = city;
    this->_cards.erase(this->_location);

    return *this;
}

Player &Player::fly_shuttle(City city)
{
    cityData c = this->_board.get_cityData(city);
    cityData curr = this->_board.get_cityData(this->_location);
    if (curr.research_station && c.research_station)
    {
        this->_location = city;

        return *this;
    }

    throw std::invalid_argument("There is no research station to your location ("+curr.name+") or to the destantion ("+c.name+")");
}

Player &Player::build()
{
    cityData curr = this->_board.get_cityData(this->_location);
    
    if (this->_cards.count(this->_location) == 0)
    {
        
        throw std::invalid_argument("missing city card of "+curr.name);
    }
    
    if (curr.research_station)
    {
        return *this;
    }
    this->_board.gameMap[this->_location].research_station=true;
    this->_cards.erase(this->_location);
    return *this;
}

Player &Player::discover_cure(Color color)
{
    if (this->_cards.size() < 5)
    {
        throw std::invalid_argument("there is no enough cards");
    }
    int count = 0;
    std::set<City> to_remove;
    for (auto &&i : this->_cards)
    {
        if (citiesColors[i] == color)
        {
            to_remove.insert(i);
            count++;
        }
        if (count == 5)
        {
            if (this->_board.medicine[color])
            {
                return *this;
            }

            for (auto &&i : to_remove)
            {
                this->_cards.erase(i);
            }
            this->_board.medicine[color] = true;
            return *this;
        }
    }

    throw std::invalid_argument("there is no enough cards of this color");
}

Player &Player::treat(City city)
{
    cityData c1 = this->_board.get_cityData(city);
    cityData curr = this->_board.get_cityData(this->_location);
    if (city != this->_location)
    {
        throw std::invalid_argument("You have to be found in the city you want to treat ("+c1.name+") you are in "+curr.name);
    }
    
    if (curr.cubes==0)
    {
        throw std::invalid_argument("this city doesn't need to be treat("+curr.name+")");
    }
    Color c=citiesColors[city];
    if (this->_board.medicine[c])
    {
         this->_board.gameMap[this->_location].cubes=0;
    }else{
         this->_board.gameMap[this->_location].cubes--;
    }
    
    return *this;
}
Player &Player::take_card(City city)
{
    this->_cards.insert(city);
    return *this;
}
