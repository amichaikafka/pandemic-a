
#pragma once
#include "Board.hpp"
#include "cityData.hpp"

#include <set>
namespace pandemic
{
    class Player
    {
    protected:
        Board& _board;
        City _location;
        std::set<City> _cards;
 

    public:
        Player(Board& board, City city);
        Player& take_card(City city);
        virtual Player& drive(City city);
        virtual Player& fly_direct(City city);
        virtual Player& fly_charter(City city);
        virtual Player& fly_shuttle(City city);
        virtual Player& build();
        virtual Player& discover_cure(Color color);
        virtual Player& treat(City city);
        virtual std::string role() = 0;
    };
}