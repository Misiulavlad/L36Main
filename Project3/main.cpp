#include <iostream>
using namespace std;
int main() {

	int vector[100];
	int i = 0;
	int n;
	int count = 0;

	cout << "Input N: ";
	cin >> n;

	cout << "Input numbers (to exit print -1): ";
	cin >> vector[i];
	
	while (vector[i] != -1) {

		if (vector[i] > n) {
			count++;
		}

		i++;
		cin >> vector[i];
	}

	cout << "Result: " << count;

	return 0;
}