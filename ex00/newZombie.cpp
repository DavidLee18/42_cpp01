#include "Zombie.h"

Zombie* newZombie(std::string name) {
	Zombie* z = new Zombie();
	if (!z->setName(name)) {
		delete z;
		return NULL;
	}
	return z;
}
