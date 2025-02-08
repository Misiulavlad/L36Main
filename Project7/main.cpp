#include <iostream>
using namespace std;
int main() {
	int vec[100];
	int count = 0;
	int i = 0;
	cout << "Input numbers(to exit print 0): ";
	cin >> vec[i];

	while (vec[i] != 0) {
		
		i++;
		cin >> vec[i];
		count++;
	}

	for (int i = 0; i <= count; i++) {
		if (vec[i] < 0) {
			cout << "There is negative number.";
			return -1;
		}
	}
	cout << "There is not negative numbers.";
	return 0;
}