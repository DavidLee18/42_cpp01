#include "Zombie.h"
#include <iostream>

Zombie::Zombie(): name() {}

Zombie::~Zombie(){
	std::cout << "killed a zombie named \"" << name << "\"" << std::endl;
}

bool Zombie::setName(std::string& n) {
	if (n.empty())
		return false;
	name = n;
	return true;
}

void Zombie::announce() {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
