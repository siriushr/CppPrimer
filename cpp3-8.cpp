#include <iostream>
#include <string>

int main() {
	std::string str;
	std::cin >> str;

	for (decltype(str.size()) c = 0; c < str.size(); ++c)
		str[c] = 'X';
	std::cout << str << std::endl;
	return 0;
}