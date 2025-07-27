#include "Zombie.h"
#include <iostream>
#include <sstream>

int main(int argc, char** argv) {
	if (argc != 2)
	{
		std::cerr << "usage: " << argv[0] << " <number of horde>" << std::endl;
		return 1;
	}
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
	Zombie* mark = new Zombie;
	if (mark) {
		if (mark->setName(name))
			mark->announce();
		delete mark;
	}
	std::cout << "zombie horde on the heap:" << std::endl;
	name = "Steve";
	std::istringstream ss(argv[1]);
	int n;
	if (ss >> n)
	{
		Zombie* horde = zombieHorde(n, name);
		if (!horde)
			return 1;
		for (int i = 0; i < n; i++)
			horde[i].announce();
		delete[] horde;
	}
	return 0;
}
