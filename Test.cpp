
#include "doctest.h"
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"

#include "Researcher.hpp"
#include "Scientist.hpp"
#include "FieldDoctor.hpp"
#include "GeneSplicer.hpp"
#include "OperationsExpert.hpp"
#include "Dispatcher.hpp"
#include "Medic.hpp"
#include "Virologist.hpp"

using namespace pandemic;

#include <vector>
#include <iostream>
#include <stdexcept>
using namespace std;


TEST_CASE("ROLES"){
    Board b;
    GeneSplicer g(b,City::London);
    Medic m(b,City::London);
    FieldDoctor f(b,City::London);
    OperationsExpert o(b,City::London);
    Researcher r(b,City::London);
    Scientist s(b,City::London,5);
    Virologist v(b,City::London);
    CHECK_EQ(g.role(), string("GeneSplicer"));
    CHECK_EQ(m.role(), string("Medic"));
    CHECK_EQ(f.role(), string("FieldDoctor"));
    CHECK_EQ(o.role(), string("OperationsExpert"));
    CHECK_EQ(r.role(), string("Researcher"));
    CHECK_EQ(s.role(), string("Scientist"));
    CHECK_EQ(v.role(), string("Virologist"));
    GeneSplicer g1(b,City::Istanbul);
    Medic m1(b,City::Istanbul);
    FieldDoctor f1(b,City::Istanbul);
    OperationsExpert o1(b,City::Istanbul);
    Researcher r1(b,City::Istanbul);
    Scientist s1(b,City::Istanbul,5);
    Virologist v1(b,City::Istanbul);
    CHECK_EQ(g1.role(), string("GeneSplicer"));
    CHECK_EQ(m1.role(), string("Medic"));
    CHECK_EQ(f1.role(), string("FieldDoctor"));
    CHECK_EQ(o1.role(), string("OperationsExpert"));
    CHECK_EQ(r1.role(), string("Researcher"));
    CHECK_EQ(s1.role(), string("Scientist"));
    CHECK_EQ(v1.role(), string("Virologist"));
    GeneSplicer g2(b,City::Istanbul);
    Medic m2(b,City::Istanbul);
    FieldDoctor f2(b,City::Istanbul);
    OperationsExpert o2(b,City::Istanbul);
    Researcher r2(b,City::Istanbul);
    Scientist s2(b,City::Istanbul,5);
    Virologist v2(b,City::Istanbul);
    CHECK_EQ(g2.role(), string("GeneSplicer"));
    CHECK_EQ(m2.role(), string("Medic"));
    CHECK_EQ(f2.role(), string("FieldDoctor"));
    CHECK_EQ(o2.role(), string("OperationsExpert"));
    CHECK_EQ(r2.role(), string("Researcher"));
    CHECK_EQ(s2.role(), string("Scientist"));
    CHECK_EQ(v2.role(), string("Virologist"));
    GeneSplicer g3(b,City::Milan);
    Medic m3(b,City::Milan);
    FieldDoctor f3(b,City::Milan);
    OperationsExpert o3(b,City::Milan);
    Researcher r3(b,City::Milan);
    Scientist s3(b,City::Milan,5);
    Virologist v3(b,City::Milan);
    CHECK_EQ(g3.role(), string("GeneSplicer"));
    CHECK_EQ(m3.role(), string("Medic"));
    CHECK_EQ(f3.role(), string("FieldDoctor"));
    CHECK_EQ(o3.role(), string("OperationsExpert"));
    CHECK_EQ(r3.role(), string("Researcher"));
    CHECK_EQ(s3.role(), string("Scientist"));
    CHECK_EQ(v3.role(), string("Virologist"));

}
