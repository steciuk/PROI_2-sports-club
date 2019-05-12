/*
Paweł Kotiuk
292898
Wiktor Kuśmirek
Projekt 2
*/

#include <iostream>
#include "SportsClub.hpp"
#include "interface.hpp"
#include "SpecyficClub.hpp"

using namespace std;

int main() {

	std::cout << "Hello Easy !" << std::endl;



	SportsClub club("test"); //= exampleClub();
	SpecyficClub specClub;
//	club.printAll();
//	std::cout << endl << "h-help"
//              << endl << "q-addPlayer"
//              << endl << "w-add Tournament"
//              << endl << "p-print"
//              << endl << "x-exit";
	while(interface(club, specClub)){}

}






