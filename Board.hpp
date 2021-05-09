#pragma once
#include "Color.hpp"
#include "cityData.hpp"


#include <map>
#include <set>
#include <iostream>

using namespace std;

namespace pandemic {

    class Board {

        private:
            std::map<const City, cityData> gameMap;

        public:
            Board();
                
            
            int& operator[](City c);
            bool is_clean();
            friend std::ostream& operator<<(std::ostream& out, const Board& b);
            void remove_cures(){};

            
    };
}