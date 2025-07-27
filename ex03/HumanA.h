#ifndef HUMANA_H
#define HUMANA_H
#include "Weapon.h"
#include <string>
#include <iostream>

class HumanA {
	private:
		std::string name;
		Weapon& arm;
	public:
		HumanA(std::string, Weapon&);
		void attack();
};

#endif
