#include<iostream>
using namespace std;

//9. Write C++ program to find sum of natural numbers in given range using recursion
int add(int n) {
    if (n != 0)
        return n + add(n - 1);
    return 0;
}

int main() {
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Sum =  " << add(n);

	return 0;
}