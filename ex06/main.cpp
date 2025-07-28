#include "Harl.h"

int main(int argc, char** argv) {
	if (argc != 2) {
		std::cerr << "usage: " << argv[0] << " <message level>" << std::endl;
		return 1;
	}
	Harl h;
	h.complainFrom(argv[1]);
	return 0;
}
