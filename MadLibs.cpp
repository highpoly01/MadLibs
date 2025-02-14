//============================================================================
// Name        : MadLibs.cpp
// Author      : 
// Version     :
// Copyright   : by marc keen. Free to use.
// Description : Mad:Libs in C++, Ansi-style
//============================================================================

#include<iostream>

int main() {

	int noun;
	int verb;
	int adj;

	std::cout << "\n\n";
	std::cout << "Welcome to << MAD LIBS >>\n";
	std::cout <<"A funny game with words :)\n\n";
	std::cout << "For each choice, enter 1,2 or 3.\n";
	std::cout << "Have fun making crazy wacky sentences!\n\n";

	std::string nounAns;
	bool g = true;

	while (g) {

		std::cout << "Choose a NOUN below\n";
		std::cout << "1) Toothbrush\n";
		std::cout << "2) Bus\n";
		std::cout << "3) Office Building\n";
		std::cin >> noun;
		std::cout << "\n";

		if(noun == 1) {

			nounAns = "toothbrush";
			g = false;

		} else if (noun == 2) {

			nounAns = "bus";
			g = false;

		} else if (noun == 3) {

			nounAns = "office building";
			g = false;

		} else {
			std::cout << "Invalid.Try again\n\n";

		}
	}

	std::string verbAns;
	bool h = true;

	while (h) {

		std::cout << "Choose a VERB below\n";
		std::cout << "1) Gargling\n";
		std::cout << "2) Throwing\n";
		std::cout << "3) Eating\n";
		std::cin >> verb;
		std::cout << "\n";

		if(verb == 1) {

			verbAns = "gargling";
			h = false;

		} else if (verb == 2) {

			verbAns = "throwing";
			h = false;

		} else if (verb == 3) {

			verbAns = "eating";
			h = false;

		} else {
			std::cout << "Invalid.Try again\n\n";

		}
	}

	std::string adjAns;
	bool i = true;

	while (i) {

		std::cout << "Choose an ADJECTIVE below\n";
		std::cout << "1) Flowery\n";
		std::cout << "2) Spicy\n";
		std::cout << "3) Humid\n";
		std::cin >> adj;
		std::cout << "\n";

		if(adj == 1) {

			adjAns = "flowery";
			i = false;

		} else if (adj == 2) {

			adjAns = "spicy";
			i = false;

		} else if (adj == 3) {

			adjAns = "humid";
			i = false;

		} else {
			std::cout << "Invalid.Try again\n\n";

		}
	}

	std::cout << "Here is your creation!\n\n";
	std::cout << "Hey, I saw you " << verbAns << " a very " << adjAns << "-looking "
			<< nounAns << " yesterday.\n";
	std::cout << "Are you OK? I am a bit worried ...\n\n";

	return 0;
}

