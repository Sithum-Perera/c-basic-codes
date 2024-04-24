#include <iostream>
using namespace std;

int main() {
	int low, high, e;
	bool isPrime = true;

	cout << "Enter First number -> "; cin >> low;
	cout << "Enter Second number -> "; cin >> high;

	cout << "Prime numbers between " << low << " and " << high << " are :-" << endl;

	while (low < high) {
		isPrime = true;
		if (low == 0 || low == 1) {
			isPrime = false;
		}
		else {
			for (e = 2; e <= low / 2; ++e) {
				if (low % e == 0) {
					isPrime = false;
					break;
				}
			}

		}
		if (isPrime)
			cout << low << " ";
		++low;
	}
	return 0;
}
