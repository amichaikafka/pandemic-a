#include "OperationsExpert.hpp"
using namespace pandemic;

OperationsExpert::OperationsExpert(Board& board, City city) : Player(board, city){

}
std::string OperationsExpert::role(){
    return std::string("Operations Expert");
}

Player& OperationsExpert::build(){
    cityData curr = this->_board.get_cityData(this->_location);
    if (curr.research_station)
    {
        return *this;
    }
    this->_board.gameMap[this->_location].research_station=true;
    
  
    return *this;
}