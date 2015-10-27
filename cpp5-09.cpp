#include <iostream>
using namespace std;

int main() {
	char c;
	int cnt = 0;

	while (cin >> c) 
		if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || 
			c == 'i' || c == 'I' || c == 'o' || c == 'O' ||
			c == 'u' || c == 'U')
			++cnt;

	cout << cnt << endl;
	return 0;
}