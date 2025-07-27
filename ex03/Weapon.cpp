#include "Weapon.h"

Weapon::Weapon(std::string ty): type(ty) {}

const std::string& Weapon::getType() { return type; }

bool Weapon::setType(std::string ty) {
	if (ty.empty())
		return false;
	type = ty;
	return true;
}
