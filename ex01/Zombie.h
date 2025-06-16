#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <string>

class Zombie {
	private:
		std::string name;
	public:
		Zombie();
		~Zombie();
		bool setName(std::string&);
		void announce();
};

Zombie* zombieHorde(int, std::string);

#endif
