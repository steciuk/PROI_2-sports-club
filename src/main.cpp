
#include <iostream>
#include "../include/SportsClub.hpp"
#include "../include/interface.hpp"
#include "../include/SpecyficClub.hpp"

using namespace std;

int main() {

	SportsClub club("test");
	SpecyficClub specClub;
	while(interface(club, specClub)){}

}






