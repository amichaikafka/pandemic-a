#pragma once
#include <map>
#include <set>
#include "Color.hpp"

namespace pandemic {
    enum City
    {
        Algiers,
        Atlanta,
        Baghdad,
        Bangkok,
        Beijing,
        Bogota,
        BuenosAires,
        Cairo,
        Chennai,
        Chicago,
        Delhi,
        Essen,
        HoChiMinhCity,
        HongKong,
        Istanbul,
        Jakarta,
        Johannesburg,
        Karachi,
        KePasio,
        Khartoum,
        Kinshasa,
        Kolkata,
        Lagos,
        Lima,
        London,
        LosAngeles,
        Madrid,
        Manila,
        MexicoCity,
        Miami,
        Milan,
        Montreal,
        Moscow,
        Mumbai,
        NewYork,
        Osaka,
        Paris,
        Riyadh,
        SanFrancisco,
        Santiago,
        SaoPaulo,
        Seoul,
        Shanghai,
        StPetersburg,
        Sydney,
        Taipei,
        Tehran,
        Tokyo,
        Washington
    };

    static std::map<City, std::string> names = {
        {City::Algiers,       "Algiers"},
        {City::Atlanta,       "Atlanta"},
        {City::Baghdad,       "Baghdad"},
        {City::Bangkok,       "Bangkok"},
        {City::Beijing,       "Beijing"},
        {City::Bogota,        "Bogota"},
        {City::BuenosAires,   "BuenosAires"},
        {City::Cairo,         "Cairo"},
        {City::Chennai,       "Chennai"},
        {City::Chicago,       "Chicago"},
        {City::Delhi,         "Delhi"},
        {City::Essen,         "Essen"},
        {City::HoChiMinhCity, "HoChiMinhCity"},
        {City::HongKong,      "HongKong"},
        {City::Istanbul,      "Istanbul"},
        {City::Jakarta,       "Jakarta"},
        {City::Johannesburg,  "Johannesburg"},
        {City::Karachi,       "Karachi"},
        {City::Khartoum,      "Khartoum"},
        {City::Kinshasa,      "Kinshasa"},
        {City::Kolkata,       "Kolkata"},
        {City::Lagos,         "Lagos"},
        {City::Lima,          "Lima"},
        {City::London,        "London"},
        {City::LosAngeles,    "LosAngeles"},
        {City::Madrid,        "Madrid"},
        {City::Manila,        "Manila"},
        {City::MexicoCity,    "MexicoCity"},
        {City::Miami,         "Miami"},
        {City::Milan,         "Milan"},
        {City::Montreal,      "Montreal"},
        {City::Moscow,        "Moscow"},
        {City::Mumbai,        "Mumbai"},
        {City::NewYork,       "NewYork"},
        {City::Osaka,         "Osaka"},
        {City::Paris,         "Paris"},
        {City::Riyadh,        "Riyadh"},
        {City::SanFrancisco,  "SanFrancisco"},
        {City::Santiago,      "Santiago"},
        {City::SaoPaulo,      "SaoPaulo"},
        {City::Seoul,         "Seoul"},
        {City::Shanghai,      "Shanghai"},
        {City::StPetersburg,  "StPetersburg"},
        {City::Sydney,        "Sydney"},
        {City::Taipei,        "Taipei"},
        {City::Tehran,        "Tehran"},
        {City::Tokyo,         "Tokyo"},
        {City::Washington,    "Washington"},
    };

     static std::map<City, std::set<City>> connections {
            { Algiers, {Madrid, Paris, Istanbul, Cairo } },
            { Atlanta, {Chicago, Miami, Washington } },
            { Baghdad, {Tehran, Istanbul, Cairo, Riyadh, Karachi } },
            { Bangkok, {Kolkata, Chennai, Jakarta, HoChiMinhCity, HongKong } },
            { Beijing, {Shanghai, Seoul } },
            { Bogota, {MexicoCity, Lima, Miami, SaoPaulo, BuenosAires } },
            { BuenosAires, {Bogota, SaoPaulo } },
            { Cairo, {Algiers, Istanbul, Baghdad, Khartoum, Riyadh } },
            { Chennai, {Mumbai, Delhi, Kolkata, Bangkok, Jakarta } },
            { Chicago, {SanFrancisco, LosAngeles, MexicoCity, Atlanta, Montreal } },
            { Delhi, {Tehran, Karachi, Mumbai, Chennai, Kolkata } },
            { Essen, {London, Paris, Milan, StPetersburg } },
            { HoChiMinhCity, {Jakarta, Bangkok, HongKong, Manila } },
            { HongKong, {Bangkok, Kolkata, HoChiMinhCity, Shanghai, Manila, Taipei } },
            { Istanbul, {Milan, Algiers, StPetersburg, Cairo, Baghdad, Moscow } },
            { Jakarta, {Chennai, Bangkok, HoChiMinhCity, Sydney } },
            { Johannesburg, {Kinshasa, Khartoum } },
            { Karachi, {Tehran, Baghdad, Riyadh, Mumbai, Delhi } },
            { Khartoum, {Cairo, Lagos, Kinshasa, Johannesburg } },
            { Kinshasa, {Lagos, Khartoum, Johannesburg } },
            { Kolkata, {Delhi, Chennai, Bangkok, HongKong } },
            { Lagos, {SaoPaulo, Khartoum, Kinshasa } },
            { Lima, {MexicoCity, Bogota, Santiago } },
            { London, {NewYork, Madrid, Essen, Paris } },
            { LosAngeles, {SanFrancisco, Chicago, MexicoCity, Sydney } },
            { Madrid, {London, NewYork, Paris, SaoPaulo, Algiers } },
            { Manila, {Taipei, SanFrancisco, HoChiMinhCity, Sydney ,HongKong} },
            { MexicoCity, {LosAngeles, Chicago, Miami, Lima, Bogota } },
            { Miami, {Atlanta, MexicoCity, Washington, Bogota } },
            { Milan, {Essen, Paris, Istanbul } },
            { Montreal, {Chicago, Washington, NewYork } },
            { Moscow, {StPetersburg, Istanbul, Tehran } },
            { Mumbai, {Karachi, Delhi, Chennai } },
            { NewYork, {Montreal, Washington, London, Madrid } },
            { Osaka, {Taipei, Tokyo } },
            { Paris, {Algiers, Essen, Madrid, Milan, London } },
            { Riyadh, {Baghdad, Cairo, Karachi } },
            { SanFrancisco, {LosAngeles, Chicago, Tokyo, Manila } },
            { Santiago, {Lima } },
            { SaoPaulo, {Bogota, BuenosAires, Lagos, Madrid } },
            { Seoul, {Beijing, Shanghai, Tokyo } },
            { Shanghai, {Beijing, HongKong, Taipei, Seoul, Tokyo } },
            { StPetersburg, {Essen, Istanbul, Moscow } },
            { Sydney, {Jakarta, Manila, LosAngeles } },
            { Taipei, {Shanghai, HongKong, Osaka, Manila } },
            { Tehran, {Baghdad, Moscow, Karachi, Delhi } },
            { Tokyo, {Seoul, Shanghai, Osaka, SanFrancisco } },
            { Washington, {Atlanta, NewYork, Montreal, Miami } }
        };



}