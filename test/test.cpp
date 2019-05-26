#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE SpecyficClub_Tests

#include <boost/test/unit_test.hpp>
#include <string>
#include <vector>


#include "../include/SpecyficClub.hpp"
#include "../include/Player.hpp"
#include "../include/SpecyficPlayer.hpp"
#include "../include/FootBallPlayer.hpp"
#include "../include/HandBallPlayer.hpp"
#include "../include/VolleyBallPlayer.hpp"

#include "../src/SpecyficClub.cpp"
#include "../src/Player.cpp"
#include "../src/SpecyficPlayer.cpp"
#include "../src/FootBallPlayer.cpp"
#include "../src/HandBallPlayer.cpp"
#include "../src/VolleyBallPlayer.cpp"

BOOST_AUTO_TEST_SUITE(SpecyficClubTest)

BOOST_AUTO_TEST_CASE(FootBallPlayerTest)
{
    BOOST_TEST_MESSAGE( "Testing FootBallPlayer: " );

    SpecyficClub SClub;

    std::string name = "Abcd";
    std::string surname = "Efgh";
    std::string position = "Ijkl";
    int shirtNo = 1;
    int age = 19;

    FootBallPlayer FPlayer(name, surname, shirtNo, position, age);
    BOOST_CHECK_EQUAL(FPlayer.getName(), "Abcd");
    BOOST_CHECK_EQUAL(FPlayer.getSurname(), "Efgh");
    BOOST_CHECK_EQUAL(FPlayer.getShirtNo(), 1);
    BOOST_CHECK_EQUAL(FPlayer.getAge(), "19");
    BOOST_CHECK(FPlayer.getInfo() == "Abcd Efgh 1");
}

//BOOST_AUTO_TEST_CASE(HandBallPlayerTest)
//{
//    BOOST_TEST_MESSAGE( "Testing HandBallPlayer: " );
//
//    SpecyficClub SClub;
//
//    std::string name = "Abcd";
//    std::string surname = "Efgh";
//    std::string position = "Ijkl";
//    int shirtNo = 1;
//
//    HandBallPlayer HPlayer(name, surname, shirtNo, position);
//    BOOST_CHECK( HPlayer.getInfo() == "Abcd Efgh 1" );
//}
//
//BOOST_AUTO_TEST_CASE(VolleyBallPlayerTest)
//{
//    BOOST_TEST_MESSAGE( "Testing VolleyBallPlayer: " );
//
//    SpecyficClub SClub;
//
//    std::string name = "Abcd";
//    std::string surname = "Efgh";
//    std::string position = "Ijkl";
//    int shirtNo = 1;
//
//    VolleyBallPlayer VPlayer(name, surname, shirtNo, position);
//    BOOST_CHECK( VPlayer.getInfo() == "Abcd Efgh 1" );
//}

//BOOST_AUTO_TEST_CASE(MultiplePlayersTest)
//{
//    BOOST_TEST_MESSAGE( "Testing multiple players: " );
//
//    SpecyficClub SClub;
//
//    std::string name = "Abcd";
//    std::string surname = "Efgh";
//    std::string position = "Ijkl";
//    int shirtNo = 1;
//
//    FootBallPlayer FPlayer1(name, surname, shirtNo, position);
//    BOOST_CHECK( FPlayer1.getInfo() == "Abcd Efgh 1" );
//    FootBallPlayer FPlayer2(name, surname, shirtNo, position);
//    BOOST_CHECK( FPlayer2.getInfo() == "Abcd Efgh 1" );
//    FootBallPlayer FPlayer3(name, surname, shirtNo, position);
//    BOOST_CHECK( FPlayer3.getInfo() == "Abcd Efgh 1" );
//    SClub.addFootBallPlayer(FPlayer1);
//    SClub.addFootBallPlayer(FPlayer2);
//    SClub.addFootBallPlayer(FPlayer3);
//
//    HandBallPlayer HPlayer1(name, surname, shirtNo, position);
//    BOOST_CHECK( HPlayer1.getInfo() == "Abcd Efgh 1" );
//    HandBallPlayer HPlayer2(name, surname, shirtNo, position);
//    BOOST_CHECK( HPlayer2.getInfo() == "Abcd Efgh 1" );
//    HandBallPlayer HPlayer3(name, surname, shirtNo, position);
//    BOOST_CHECK( HPlayer3.getInfo() == "Abcd Efgh 1" );
//    SClub.addHandBallPlayer(HPlayer1);
//    SClub.addHandBallPlayer(HPlayer2);
//    SClub.addHandBallPlayer(HPlayer3);
//
//    VolleyBallPlayer VPlayer1(name, surname, shirtNo, position);
//    BOOST_CHECK( VPlayer1.getInfo() == "Abcd Efgh 1" );
//    VolleyBallPlayer VPlayer2(name, surname, shirtNo, position);
//    BOOST_CHECK( VPlayer2.getInfo() == "Abcd Efgh 1" );
//    VolleyBallPlayer VPlayer3(name, surname, shirtNo, position);
//    BOOST_CHECK( VPlayer3.getInfo() == "Abcd Efgh 1" );
//    SClub.addVolleyBallPlayer(VPlayer1);
//    SClub.addVolleyBallPlayer(VPlayer2);
//    SClub.addVolleyBallPlayer(VPlayer3);
//
//    SClub.showSpecyficPlayers();
//}

BOOST_AUTO_TEST_SUITE_END()

