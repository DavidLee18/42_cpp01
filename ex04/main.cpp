#include <fstream>
#include <iostream>

int main (int argc, char** argv) {
	if (argc != 4) {
		std::cerr << "usage: " << argv[0] << " <file> <string to replace> <string to replace into>" << std::endl;
		return 1;
	}
	std::string filename(argv[1]);
	std::ifstream file(argv[1]);
	if (!file) {
		std::cerr << "error opening " << argv[1] << std::endl;
		return 1;
	}
	if (file.peek() == -1) {
		std::cerr << argv[1] << " is empty. no need to replace" << std::endl;
		return 1;
	}
	filename += ".replace";
	std::ofstream replaced(filename.c_str());
	if (!replaced) {
		std::cerr << "error opening " << filename << std::endl;
		return 1;
	}
	std::string line;
	size_t p = 0;
	while (std::getline(file, line)) {
		if ((p = line.find(argv[2])) != std::string::npos) {
			replaced << line.substr(0, p)
				<< argv[3]
				<< line.substr(p + std::string(argv[2]).length()) << std::endl;
		} else {
			replaced << line << std::endl;
		}
	}
	return 0;
}
