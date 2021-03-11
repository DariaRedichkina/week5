#include <iomanip>
#include <iostream>
#include <regex>
#include <string>


int main(int argc, char** argv) {

	std::regex pattern(R"(^([\w\.\-]+)@([\w\-]+)((\.(\w){2,3})+)$)");

	for (std::string line; getline(std::cin, line); )
	{
		std::smatch matches;

		if (std::regex_search(line, matches, pattern))
		{
			for (std::size_t i = 2; i < 4; ++i)
			{
				std::cout << matches[i];
			}

			std::cout << std::endl;
		}
	}

	system("pause");

	return 0;
}