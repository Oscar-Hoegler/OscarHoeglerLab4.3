/*Oscar Hogler, September 15 2022, Laboratory 4.3
 *OscarHoeglerLab4.3.cpp, Get number length */

#include <iostream>
#include <math.h>

using namespace std;

int main(void) { 

	double number;

	cout << "what number would you like to know the name of? "; cin >> number;
	//fixes negatives
	if (number < 0) { number *= -1;}
	//fixes 0
	if (number == 0) { number += 1; }
	//yay math
	cout << "the length of your number is " << floor(log10(number)+1);

	return 0;
}