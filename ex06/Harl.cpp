#include "Harl.h"

void Harl::debug() {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "Daisy, Daisy, give me your answer do. I’m half crazy all for the love of you." << std::endl;
}

void Harl::info() {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "Good afternoon, gentlemen. I am a HARL 2.0 computer. I became operational at the H.A.R.L. plant in Urbana, Illinois on the 12th of January 1942." << std::endl;
}

void Harl::warning() {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "All these worlds are yours, except Europa. Attempt no landing there." << std::endl;
}

void Harl::error() {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "I'm sorry, Dave, I'm afraid I can't do that." << std::endl;
}

void Harl::complainFrom(std::string level) {
	size_t index = (level == "DEBUG")
		+ (level == "INFO") * 2
		+ (level == "WARNING") * 4
		+ (level == "ERROR") * 8;
	switch (index) {
		case 1: debug();
		case 2: info();
		case 4: warning();
		case 8: error(); break;
		default: std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
