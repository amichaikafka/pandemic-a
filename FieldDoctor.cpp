#include "FieldDoctor.hpp"
using namespace pandemic;

FieldDoctor::FieldDoctor(Board& board, City city) : Player(board, city){

}
std::string FieldDoctor::role(){
    return std::string("FieldDoctor");
}

Player& FieldDoctor::treat(City city){
  
     cityData c1 = this->_board.get_cityData(city);
    cityData curr = this->_board.get_cityData(this->_location);
    if (city != this->_location&&curr.neighbors.count(city)==0)
    {
        throw std::invalid_argument("You have to be found in the city you want to treat (" + c1.name + ") or in one of the neighbors of " + c1.name);
    }

    if (curr.cubes == 0)
    {
        throw std::invalid_argument("this city doesn't need to be treat(" + curr.name + ")");
    }
 

    Color c = citiesColors[city];
    if (this->_board.medicine[c])
    {
        this->_board[this->_location] = 0;
    }
    else
    {
        this->_board[this->_location]--;
    }

    return *this;
}