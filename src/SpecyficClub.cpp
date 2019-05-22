#include <vector>
#include <string>
#include "../include/SpecyficClub.hpp"

using namespace std;

void SpecyficClub::addFootBallPlayer(FootBallPlayer playerToAdd)
{
    footBallPlayers.push_back(playerToAdd);
}

void SpecyficClub::addHandBallPlayer(HandBallPlayer playerToAdd)
{
    handBallPlayers.push_back(playerToAdd);
}

void SpecyficClub::addVolleyBallPlayer(VolleyBallPlayer playerToAdd)
{
    volleyBallPlayers.push_back(playerToAdd);
}

 void SpecyficClub::showSpecyficPlayers()
 {
    string playerInfo;
    cout << endl << "Football Players: ";
    for( vector<FootBallPlayer>::iterator iFootBallPlayer = footBallPlayers.begin(); iFootBallPlayer != footBallPlayers.end(); iFootBallPlayer++ )
    {
        playerInfo = iFootBallPlayer->getInfo();
        cout << endl << playerInfo;
        showSpecyficPlayer((SpecyficPlayer*)&(*iFootBallPlayer));
    }

    cout << endl <<  "Handball Players: ";
    for( vector<HandBallPlayer>::iterator iHandBallPlayer = handBallPlayers.begin(); iHandBallPlayer != handBallPlayers.end(); iHandBallPlayer++ )
    {
        playerInfo = iHandBallPlayer->getInfo();
        cout  << endl << playerInfo;
        showSpecyficPlayer((SpecyficPlayer*)&(*iHandBallPlayer));
    }

    cout << endl <<  "Volleyball Players: ";
    for( vector<VolleyBallPlayer>::iterator iVolleyBallPlayer = volleyBallPlayers.begin(); iVolleyBallPlayer != volleyBallPlayers.end(); iVolleyBallPlayer++ )
    {
        playerInfo = iVolleyBallPlayer->getInfo();
        cout << endl << playerInfo;
        showSpecyficPlayer((SpecyficPlayer*)&(*iVolleyBallPlayer));
    }
 }

 void showSpecyficPlayer(SpecyficPlayer *wsk) //polimorfizm
 {
    wsk->showPosition();
 }
