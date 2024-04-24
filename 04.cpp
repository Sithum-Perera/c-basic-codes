#include<iostream>
using namespace std;

//4. Write C++ program to check even or odd using functions
int num(int i) {
	
	if (i % 2 == 0) {
		cout << "This is a EVEN number" << endl;
	}
	else {
		cout << "This is a ODD number" << endl;
	}
	return i;
}

int main() {
	int i;

    cout << "Enter a number: "; cin >>i;
	num(i);

	return 0;
 }