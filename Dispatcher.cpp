#include "Dispatcher.hpp"
using namespace pandemic;

Dispatcher::Dispatcher(Board &board, City city) : Player(board, city)
{
}
std::string Dispatcher::role()
{
    return std::string("Dispatcher");
}

Player &Dispatcher::fly_direct(City city)
{
    cityData curr = this->_board.get_cityData(this->_location);
    if (curr.research_station)
    {
        this->_location = city;

        return *this;
    }

    Player::fly_direct(city);
    return *this;
}