#include "Zombie.h"

void randomChump(std::string name) {
	Zombie z;
	if (z.setName(name))
		z.announce();
}
