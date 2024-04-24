#include<iostream>
using namespace std;

//02.Write a Program to print the Fibonacci sequence of a number using functions.

int fib(int n) {
    if ((n == 1) || (n == 0))
    {
        return(n);
    }
    else
    {
        return(fib(n - 1) + fib(n - 2));
    }
}
int main() {
    int n, i = 0;
    cout << "\nEnter How Many Terms You Want To Print Fibonacci Series ";
    cin >> n;
    cout << "\nFibonnaci Series Is Given Below\n\n";

    while (i < n)
    {
        cout << " " << fib(i);
        i++;
    }
	return 0;
}