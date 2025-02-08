#include <iostream>
using namespace std;
int main() {
	int i = 0;
	int count = 0;
	int size[100];
	cout << "Input numbers (to exit print -1): ";
	cin >> size[i];
	while (size[i] != -1) {
		if (size[i] != 0) {
			count++;
		}
		i++;
		cin >> size[i];
	}
	cout << "Result: " << count;
	return 0;
}