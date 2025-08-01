#ifndef WEAPON_H
#define WEAPON_H
#include <string>

class Weapon {
	private:
		std::string type;
	public:
		Weapon(std::string);
		const std::string& getType();
		bool setType(std::string);
};

#endif
