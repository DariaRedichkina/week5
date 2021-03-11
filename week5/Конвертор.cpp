#include <iostream>
#include <sstream>
#include <locale>
#include <iomanip>

int main() {

	long double mon;
	std::cout << "Enter ";
	std::cin.imbue(std::locale("en_US.UTF-8"));
	std::cin >> std::get_money(mon);
	mon = mon * 70;
	std::cout.imbue(std::locale("ru_RU.UTF-8"));
	std::cout << "ru_RU: " << std::put_money(mon);

	return 0;
}