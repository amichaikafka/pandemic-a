#include "Medic.hpp"
using namespace pandemic;

Medic::Medic(Board& board, City city) : Player(board, city){

}
std::string Medic::role(){
    return std::string("Medic");
}

Player& Medic::treat(City city){
  
    return *this;
}