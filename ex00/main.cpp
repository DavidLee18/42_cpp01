#include "Zombie.h"
#include <iostream>

int main() {
	std::cout << "sample zombies:" << std::endl;
	Zombie foo;
	std::string name = "Foo";
	if (foo.setName(name))
		foo.announce();
	Zombie bar;
	name = "Bar";
	if (bar.setName(name))
		bar.announce();
	std::cout << "zombie on the heap:" << std::endl;
	name = "Mark";
	Zombie* mark = newZombie(name);
	if (mark) {
		mark->announce();
		delete mark;
	}
	std::cout << "random chump:" << std::endl;
	name = "Steve";
	randomChump(name);
	return 0;
}
