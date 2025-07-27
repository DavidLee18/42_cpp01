#ifndef HUMANB_H
#define HUMANB_H
#include "Weapon.h"
#include <string>
#include <iostream>

class HumanB {
	private:
		std::string name;
		Weapon* arm;
	public:
		HumanB(std::string);
		void attack();
		void setWeapon(Weapon&);
};

#endif
