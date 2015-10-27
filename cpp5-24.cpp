#include <iostream>
#include <stdexcept>
using std::cin;
using std::cout;
using std::runtime_error;

int main() {
	int i, j;
	cin >> i >> j;
	if (j == 0) 
		throw runtime_error("error");
	cout << i / j << "\n";
	return 0;
}