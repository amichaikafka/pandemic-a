#include "Virologist.hpp"
using namespace pandemic;

Virologist::Virologist(Board& board, City city) : Player(board, city){

}
std::string Virologist::role(){
    return std::string("Virologist");
}

Player& Virologist::treat(City city){
  
    return *this;
}