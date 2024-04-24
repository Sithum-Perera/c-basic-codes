#include<iostream>
using namespace std;

//3. Write a program to find the factorial of a given number by using a function in C++ programming language.
int facto(int num) {
    int fact = 1;
    for (int i = num; i >= 1; i--) {
       fact = fact * i;
    }
    return fact;
}

int main(){
    int num,fact=1;

    cout << "Enter the Number: ";
    cin >> num;
   
    cout << "\nFactorial = " << facto(num);
    cout << endl;
    
    return 0;
}
