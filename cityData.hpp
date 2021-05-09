#pragma once
#include <map>
#include <set>
#include "City.hpp"
#include "Color.hpp"

namespace pandemic {

  class cityData{
      
        City city;
        Color color;
         std::string name;
        int cubes;
        bool research_station;
        std::set<City> neighbors;
       
    
      public:

        cityData(const City city): city(city), research_station(false), name(names[city]), cubes(0), neighbors(connections[city]), color(citiesColors[city]) {}
        cityData(){}

        std::set<City> get_neighbors(){
            return neighbors;
        }

        int& get_cubes(){
            return cubes;
        }

        Color& get_color(){
            return color;
        }

        bool is_there_stations(){
            return research_station;
        }
  };
}