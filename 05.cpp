#include<iostream>
#include<cmath>
using namespace std;

//5. Write C++ Program to convert binary number to decimal
int binarytodecimal(int n) {
	int num = n;
	int dec = 0;
	int base = 1;
	int temp = num;

	while (temp) {
		int lastdig = temp % 10;
		temp = temp / 10;
		dec += lastdig * base;
		base = base * 2;
	}
	return dec;
}
int main() {
	int num;
	cout << "Enter binary number: "; cin >> num;

	cout << binarytodecimal(num) << "\n";
}