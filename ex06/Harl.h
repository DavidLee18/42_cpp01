#ifndef HARL_H
#define HARL_H
#include <string>
#include <iostream>
#include <cstdlib>

class Harl {
	private:
		void debug();
		void info();
		void warning();
		void error();
	public:
		void complainFrom(std::string);
};

#endif
