#include "GeneSplicer.hpp"
using namespace pandemic;

GeneSplicer::GeneSplicer(Board &board, City city) : Player(board, city)
{
}
std::string GeneSplicer::role()
{
    return std::string("GeneSplicer");
}

Player &GeneSplicer::discover_cure(Color color)
{

    cityData curr = this->_board.get_cityData(this->_location);
    if (!curr.research_station)
    {
        throw std::invalid_argument("there is no research station in " + curr.name);
    }

    if (this->_cards.size() < 5)
    {
        throw std::invalid_argument("there is no enough cards");
    }
    if (this->_board.medicine[color])
    {
        return *this;
    }

    int count = 0;
    for (std::set<City>::iterator it = this->_cards.begin(); it != this->_cards.end(); ++it)
    {
        this->_cards.erase(it);
        count++;
        if (count == 5)
        {
            return *this;
        }
    }
    return *this;

}