#include "Researcher.hpp"
using namespace pandemic;

Researcher::Researcher(Board& board, City city) : Player(board, city){

}
std::string Researcher::role(){
    return std::string("Researcher");
}

Player& Researcher::discover_cure(Color color){
  
    return *this;
}