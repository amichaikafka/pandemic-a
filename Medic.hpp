#pragma once
#include <string>
#include "Player.hpp"
namespace pandemic
{
    class Medic : public Player
    {
    private:
    public:
        Medic(Board& board, City city);
        virtual std::string role();
        virtual Player& treat(City city);
    };
}