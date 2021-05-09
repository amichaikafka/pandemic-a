#include "Scientist.hpp"
using namespace pandemic;

Scientist::Scientist(Board& board, City city,int n) : Player(board, city),n(n){

}
std::string Scientist::role(){
    return std::string("Scientist");
}

Player& Scientist::discover_cure(Color color){
     cityData curr = this->_board.get_cityData(this->_location);
    if (!curr.research_station)
    {
        throw std::invalid_argument("there is no research station in "+curr.name);
    }
  
    if (this->_cards.size() < this->n)
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
        if (count == this->n)
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