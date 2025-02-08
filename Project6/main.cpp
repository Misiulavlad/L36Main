#include <iostream>
using namespace std;
int main() {
	int count = 0;
	int count1 = -1;
	int numbers = 0;
	int vector[100];
	int i = 0;

	cout << "Input numbers (to exit print -1): ";
	cin >> vector[i];

	while (vector[i] != -1) {
		count++;
		numbers += vector[i];
		i++;
		cin >> vector[i];
	}

	double middle = numbers / count;

	cout << "Middle is:" << middle << endl;

	for (i = 0; i <= count; i++) {

		if (vector[i] < middle) {
			count1++;
		}

	}

	cout << "Count: " << count1;
	return 0;
}