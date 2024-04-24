#include <iostream>
#define MAX_SIZE 100
using namespace std;

//11. Write C++ program to find sum of array elements using recursion
int sum(int arr[], int start, int len)
{
    // Recursion base condition
    if (start >= len)
        return 0;

    return (arr[start] + sum(arr, start + 1, len));
}

int main()
{
    int arr[MAX_SIZE];
    int num, i, sumofarray;

    cout << "Enter size of the array: ";
    cin >> num;
    
    for (i = 0; i < num; i++)
    {
        cout << "Enter elements in the array: ";
        cin >> arr[i];
    }


    sumofarray = sum(arr, 0, num);
    cout << "Sum of array elements: " << sumofarray;

    return 0;
}

