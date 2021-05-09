#include "Scientist.hpp"
using namespace pandemic;

Scientist::Scientist(Board& board, City city,int n) : Player(board, city),n(n){

}
std::string Scientist::role(){
    return std::string("Scientist");
}

Player& Scientist::discover_cure(Color color){
  
    return *this;
}