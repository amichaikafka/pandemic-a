#include "Dispatcher.hpp"
using namespace pandemic;

Dispatcher::Dispatcher(Board& board, City city) : Player(board, city){

}
std::string Dispatcher::role(){
    return std::string("Dispatcher");
}

Player& Dispatcher::fly_direct(City city){
  
    return *this;
}