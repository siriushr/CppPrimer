#include <iostream>
using std::cout;
using std::endl;

int main() {
	int arr[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

	//范围for语句
	using int_array = int[4];
	for (int_array &p: arr) {
		for (int q: p)
			cout << q << " ";
		cout << endl;
	}

	//下标运算符
	for (size_t row = 0; row < 3; row++) {
		for (size_t col = 0; col < 4; col++)
			cout << arr[row][col] << " ";
		cout << endl;
	}

	//使用指针
	for (int_array *p = arr; p != arr + 3; p++) {
		for (int *q = *p; q != *p + 4; q++) 
			cout << *q << " ";
		cout << endl;
	}
	return 0;
}