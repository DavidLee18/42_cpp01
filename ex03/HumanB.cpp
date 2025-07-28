#include "HumanB.h"

HumanB::HumanB(std::string n): name(n), arm(NULL) {}

void HumanB::attack() {
	if (arm)
		std::cout << name << " attaks with their " << arm->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& w) { arm = &w; }
