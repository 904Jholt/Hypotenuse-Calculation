#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double getHypot(double side1, double side2);
double side1;
double side2;
double hypotenuse;

int main() {
	
	cout << setw(10) << "Triangle" << setw(10) << "Side1" << setw(10) << "Side2" << setw(15) << "Hypotenuse" << endl;
	cout << setw(10) << "1" << setw(10) << "3.0" << setw(10) << "4.0" << setw(10) << getHypot(3.0, 4.0) << endl;
	cout << setw(10) << "2" << setw(10) << "5.0" << setw(10) << "12.0" << setw(10) << getHypot(5.0, 12.0) << endl;
	cout << setw(10) << "3" << setw(10) << "8.0" << setw(10) << "15.0" << setw(10) << getHypot(8.0, 15.0) << endl;
	cout << endl;

	return 0;
}

double getHypot(double side1, double side2)
{
	double getHypot = sqrt((side1 * side1) + (side2 * side2));
	return hypotenuse;
}
