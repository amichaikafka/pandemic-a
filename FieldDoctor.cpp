#include "FieldDoctor.hpp"
using namespace pandemic;

FieldDoctor::FieldDoctor(Board& board, City city) : Player(board, city){

}
std::string FieldDoctor::role(){
    return std::string("FieldDoctor");
}

Player& FieldDoctor::treat(City city){
  
    return *this;
}