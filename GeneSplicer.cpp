#include "GeneSplicer.hpp"
using namespace pandemic;

GeneSplicer::GeneSplicer(Board& board, City city) : Player(board, city){

}
std::string GeneSplicer::role(){
    return std::string("GeneSplicer");
}

Player& GeneSplicer::discover_cure(Color color){
  
    return *this;
}