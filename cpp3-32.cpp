#include <iostream>
using namespace std;

int main() {
	int arr[10] = {};
	int ind = 0;
	for (ind = 0; ind < 10; ind++) {
		arr[ind] = ind;
		cout << ind << " " << arr[ind] << endl;
	}

	int arr2[10] = {};
	for (ind = 0; ind < 10; ind++) 
		arr2[ind] = arr[ind];

	
	return 0;
}