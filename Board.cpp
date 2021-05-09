
#include "Board.hpp"
using namespace std;
using namespace pandemic;

Board::Board(){
     gameMap = {
        {City::Algiers,       cityData{City::Algiers}},
        {City::Atlanta,       cityData{City::Atlanta}},
        {City::Baghdad,       cityData{City::Baghdad}},
        {City::Bangkok,       cityData{City::Bangkok}},
        {City::Beijing,       cityData{City::Beijing}},
        {City::Bogota,        cityData{City::Bogota}},
        {City::BuenosAires,   cityData{City::BuenosAires}},
        {City::Cairo,         cityData{City::Cairo}},
        {City::Chennai,       cityData{City::Chennai}},
        {City::Chicago,       cityData{City::Chicago}},
        {City::Delhi,         cityData{City::Delhi}},
        {City::Essen,         cityData{City::Essen}},
        {City::HoChiMinhCity, cityData{City::HoChiMinhCity}},
        {City::HongKong,      cityData{City::HongKong}},
        {City::Istanbul,      cityData{City::Istanbul}},
        {City::Jakarta,       cityData{City::Jakarta}},
        {City::Johannesburg,  cityData{City::Johannesburg}},
        {City::Karachi,       cityData{City::Karachi}},
        {City::Khartoum,      cityData{City::Khartoum}},
        {City::Kinshasa,      cityData{City::Kinshasa}},
        {City::Kolkata,       cityData{City::Kolkata}},
        {City::Lagos,         cityData{City::Lagos}},
        {City::Lima,          cityData{City::Lima}},
        {City::London,        cityData{City::London}},
        {City::LosAngeles,    cityData{City::LosAngeles}},
        {City::Madrid,        cityData{City::Madrid}},
        {City::Manila,        cityData{City::Manila}},
        {City::MexicoCity,    cityData{City::MexicoCity}},
        {City::Miami,         cityData{City::Miami}},
        {City::Milan,         cityData{City::Milan}},
        {City::Montreal,      cityData{City::Montreal}},
        {City::Moscow,        cityData{City::Moscow}},
        {City::Mumbai,        cityData{City::Mumbai}},
        {City::NewYork,       cityData{City::NewYork}},
        {City::Osaka,         cityData{City::Osaka}},
        {City::Paris,         cityData{City::Paris}},
        {City::Riyadh,        cityData{City::Riyadh,}},
        {City::SanFrancisco,  cityData{City::SanFrancisco}},
        {City::Santiago,      cityData{City::Santiago}},
        {City::SaoPaulo,      cityData{City::SaoPaulo}},
        {City::Seoul,         cityData{City::Seoul}},
        {City::Shanghai,      cityData{City::Shanghai}},
        {City::StPetersburg,  cityData{City::StPetersburg}},
        {City::Sydney,        cityData{City::Sydney}},
        {City::Taipei,        cityData{City::Taipei}},
        {City::Tehran,        cityData{City::Tehran}},
        {City::Tokyo,         cityData{City::Tokyo}},
        {City::Washington,    cityData{City::Washington}}
    };
}


int& Board::operator[](City city) {
return Board::gameMap[city].cubes;

}

bool Board::is_clean() {
    return false;
}

ostream& pandemic::operator<<(ostream& out, const Board& b){
    return out;
}
cityData Board::get_cityData(City city){
    return Board::gameMap[city];
}
    

