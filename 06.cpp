#include<iostream>
using namespace  std;

//6. Write C++ Program to convert decimal number to binary
void dectobin(int n) {
	int binarynum[32];
	int i = 0;
	while (n > 0) {
		binarynum[i] = n % 2;
		n = n / 2;
		i++;
	}
	for (int k = i-1; k >= 0; k--)
	{
		cout << binarynum[k];

	}
}

int main() {
	int n;
	cout << "Enter decimal number: "; cin >> n;
	dectobin(n);
	return 0;
}