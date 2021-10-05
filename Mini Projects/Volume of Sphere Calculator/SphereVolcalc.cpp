#include <iostream>
#include <cmath>
using namespace std;

int main(){
	//declare variables used in the program
	int radius;
	double pi;
	double volume;
	//assign pi with the value 3.14159 
	pi = 3.14159;
	
	//Ask for user input for radius
	cout << "Enter the radius of the sphere (Do not enter units, assume this is in cm): " << endl;
	cin >> radius;
	volume = (1.33333 * pi * pow(radius, 3));
	cout << "The volume of the sphere is: " << volume << " cubic centimeters.";
	return 0; 
}
