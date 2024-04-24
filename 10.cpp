#include<iostream>
#define MAX_SIZE 100
using namespace std;

//10. Write C++ program to print elements of array using recursion
void Array(int arr[], int start, int len)
{
    if (start >= len)
        return;

    cout << arr[start] << "\t";

    Array(arr, start + 1, len);
}
int main() {
    int arr[MAX_SIZE];
    int num, i;

    cout << "Enter size of the array: ";
    cin >> num;

    for (i = 0; i < num; i++)
    {
        cout << "Enter elements in the array: ";
        cin >> arr[i];
    }

    cout << "Elements in the array: ";
    Array(arr, 0, num);
	return 0;
}