#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::string;

int main() {
	int grade = 0;
	std::cin >> grade;

	if (grade == 100) {
		std::cout << "A++" << std::endl;
		return -1;
	}
	if (grade < 60) {
		std::cout << "F" << std::endl;
		return -1;
	}

	int i = grade / 10;
	int j = grade % 10;
	string scores;
	scores = (i == 9) ? "A"
	                  : (i == 8) ? "B"
	                             : (i == 7) ? "C"
	                                        : "D";
	scores += (j > 7) ? "+"
	                  : (j < 3) ? "-" : "";

	std::cout << "the score is: " << scores << std::endl;
}