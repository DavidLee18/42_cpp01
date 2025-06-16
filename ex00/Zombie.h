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

Zombie* newZombie(std::string);
void randomChump(std::string);

#endif
