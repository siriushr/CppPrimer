#include <iostream>
#include <string>
using namespace std;

int main() {
	int grade = 0;
	string finalgrade;

	//version 1
	while (cin >> grade) {
		finalgrade = (grade > 90) ? "high pass"
									: (grade > 75) ? "pass" : (grade > 60) ? "low pass" : "fail";
		cout << finalgrade << endl;
	}

	//version 2
	while (cin >> grade) {
		if (grade > 90) 
			finalgrade = "high pass";
		else if (grade > 75) 
			finalgrade = "pass";
		else if (grade > 60) 
			finalgrade = "low pass";
		else 
			finalgrade = "fail";
		cout << finalgrade << endl;
	}
	return 0;
}