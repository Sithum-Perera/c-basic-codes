#include<iostream>
#define PI 3.14159
using namespace std;

//7. Write C++ program to find diameter, circumferenceand area of circle using function
double Diameter(double radius);
double Circumference(double radius);
double Area(double radius);

double Diameter(double radius)
{
	return (2 * radius);
}

double Circumference(double radius)
{
	return (2 * PI * radius); 
}

double Area(double radius)
{
	return (PI * radius * radius); 
}
int main() {
    float radius, diameter, circle, area;

    cout << "Enter radius of circle: ";
    cin >> radius;

    diameter = Diameter(radius);      
    circle = Circumference(radius);  
    area = Area(radius);           

    cout << "Diameter of the circle: " << diameter << " units" << endl;
    cout << "Circumference of the circle: " << circle << " units" << endl;
    cout << "Area of the circle: " << area << " sq. units" << endl;

	return 0;
}