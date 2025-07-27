#include "HumanA.h"

HumanA::HumanA(std::string n, Weapon& w): name(n), arm(w) {}

void HumanA::attack() {
	std::cout << name << " attaks with their " << arm.getType() << std::endl;
}
