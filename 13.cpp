#include <iostream>
using namespace std;

//13. Write C++ program to find maximum and minimum elements in array using recursion
int FindMax(int a[], int n) 
{
	int i, max;
	max = a[0];
	for (i = 1; i < n; i++)
	{
		if (a[i] > max) 
			max = a[i]; 
	}
	return max; 
}

int FindMin(int a[], int n) 
{
	int i, min;
	min = a[0];
	for (i = 1; i < n; i++)
	{
		if (a[i] < min)
			min = a[i];
	}
	return min; 
}
int main()
{
	int i, array[50], size, max, min;

	cout << "Input number of elements in array: ";
	cin >> size;

	
	for (i = 0; i < size; i++) {
		cout << "Enter integer: ";
		cin >> array[i];
	}

	max = FindMax(array, size); 
	min = FindMin(array, size); 

	cout << "Maximum element in the array is:" << max << "\n";
	cout << "Minimum element in the array is:" << min << "\n";

	return 0;
}


