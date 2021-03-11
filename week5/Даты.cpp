#include <iomanip>
#include <iostream>
#include <regex>
#include <string>


int main(int argc, char** argv) {

	std::regex pattern(R"(19 | 20)\d\d - ((0[1 - 9] | 1[012]) - (0[1 - 9] | [12]\d) | (0[13 - 9] | 1[012]) - 30 | (0[13578] | 1[02]) - 31)");

	for (std::string line; getline(std::cin, line); )
	{
		std::smatch matches;

		if (std::regex_search(line, matches, pattern))
		{
			for (std::size_t i = 0; i < matches.size(); ++i)
			{
				std::cout << matches[i] << " | ";
			}

			std::cout << std::endl;
		}
	}

	system("pause");

	return 0;
}