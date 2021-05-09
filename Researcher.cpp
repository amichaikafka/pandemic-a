#include "Researcher.hpp"
using namespace pandemic;

Researcher::Researcher(Board& board, City city) : Player(board, city){

}
std::string Researcher::role(){
    return std::string("Researcher");
}

Player& Researcher::discover_cure(Color color){
  
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