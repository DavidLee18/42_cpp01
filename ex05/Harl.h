#ifndef HARL_H
#define HARL_H
#include <string>
#include <iostream>
#include <cstdlib>

class Harl {
	private:
		void (Harl::*fps[16])();
		void debug();
		void info();
		void warning();
		void error();
		void abort();
	public:
		Harl();
		void complain(std::string);
};

#endif
