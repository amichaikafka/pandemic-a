#include "OperationsExpert.hpp"
using namespace pandemic;

OperationsExpert::OperationsExpert(Board& board, City city) : Player(board, city){

}
std::string OperationsExpert::role(){
    return std::string("Operations Expert");
}

Player& OperationsExpert::build(){
  
    return *this;
}