//ITSE_1307 Indtroduction to C++
//Module 4 Chapter 6
//Author: Jonathon Holt
//This program calculates the hypotenuse of 3 right triangles when the other sides are given. 
#include <iostream>
#include <iomanip>//library included to set decimal places for return values.
#include <cmath>//library included to use mathematical functions.

using namespace std;

double getHypot(double, double);//function prototype.

int main() {//main function that displays information in a tabular format.

	cout << fixed << setprecision(1);//included so that hypotenuse returns with one decimal place.
	cout << setw(10) << "Triangle" << setw(10) << "Side1" << setw(10) << "Side2" << setw(15) << "Hypotenuse" << endl;
	cout << setw(5) << "1" << setw(15) << "3.0" << setw(10) << "4.0" << setw(10) << getHypot( 3, 4) << endl;
	cout << setw(5) << "2" << setw(15) << "5.0" << setw(10) << "12.0" << setw(10) << getHypot( 5.0, 12.0) << endl;
	cout << setw(5) << "3" << setw(15) << "8.0" << setw(10) << "15.0" << setw(10) << getHypot( 8.0, 15.0) << endl;
	cout << endl;

	return 0;
}

double getHypot(double a, double b)//function that calculates the hypotenuse of right triangle.
{
	return sqrt((a*a)+(b*b));//equation using sqrt from cmath library.
	
}
