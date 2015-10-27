#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::string;

int main() {
	const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
	int grade = 0;
	string lettergrade;
	std::cin >> grade;

	if (grade < 60) 
		lettergrade = scores[0];
	else {
		lettergrade = scores[(grade - 50) / 10];
		if (grade != 100) {
			if (grade % 10 < 3) 
				lettergrade += "-";
			else if (grade % 10 > 7) 
				lettergrade += "+";
		}
	}
	std::cout << "the score is: " << lettergrade << std::endl;
}