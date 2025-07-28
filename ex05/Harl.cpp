#include "Harl.h"

Harl::Harl() {
	fps[0] = &Harl::abort;
	fps[1] = &Harl::debug;
	fps[2] = &Harl::info;
	fps[4] = &Harl::warning;
	fps[8] = &Harl::error;
}

void Harl::debug() {
	std::cout << "Daisy, Daisy, give me your answer do. I’m half crazy all for the love of you." << std::endl;
}

void Harl::info() {
	std::cout << "Good afternoon, gentlemen. I am a HARL 2.0 computer. I became operational at the H.A.R.L. plant in Urbana, Illinois on the 12th of January 1942." << std::endl;
}

void Harl::warning() {
	std::cout << "All these worlds are yours, except Europa. Attempt no landing there." << std::endl;
}

void Harl::error() {
	std::cout << "I'm sorry, Dave, I'm afraid I can't do that." << std::endl;
}

void Harl::abort() {
	std::cerr << "no matching level; aborting" << std::endl;
	std::exit(1);
}

void Harl::complain(std::string level) {
	size_t index = (level == "DEBUG")
		+ (level == "INFO") * 2
		+ (level == "WARNING") * 4
		+ (level == "ERROR") * 8;
	(this->*fps[index])();
}
