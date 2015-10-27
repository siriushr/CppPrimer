#include <iostream>
#include <stdexcept>
using std::cin;
using std::cout;
using std::runtime_error;
using std::endl;

int main() {
	int val1, val2;
	while (cin >> val1 >> val2) {
		try {
			if (val2 == 0) {
				throw runtime_error("除数不能为零");
			}
			cout << "两数相除结果是：" << val1 / val2 << endl;
		} catch(runtime_error err) {
			cout << err.what() << endl;
			cout << "Continue? y or n? ";
			char c;
			cin >> c;
			if (c != 'y' && c != 'Y') 
				break;
		}
	}

	return 0;
}