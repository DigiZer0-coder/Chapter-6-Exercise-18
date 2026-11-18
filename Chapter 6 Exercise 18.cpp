#include <iostream>
#include <string>
#include <cmath>
using namespace std;

double newyear(double startpopulation, float birthrate, float deathrate) {

	double newpopulation;
	return newpopulation = startpopulation + (startpopulation * birthrate) - (startpopulation * deathrate);
}

int main()
{
	double startpopulation;
	float birthrate;
	float deathrate;
	int years;

	cout << "Enter the starting population: ";
	cin >> startpopulation;
	cout << "Enter the birth rate (as a decimal): ";
	cin >> birthrate;
	cout << "Enter the death rate (as a decimal): ";
	cin >> deathrate;
	cout << "Enter the number of years to simulate: ";
	cin >> years;
	
	cout << endl;
	
	cout << "Your starting population is: " << startpopulation << endl;
	cout << "Year            Population" << endl;
	cout << "----------------------------" << endl;
	
	double currentpopulation = startpopulation;
	for (int i = 1; i <= years; i++) {
		currentpopulation = newyear(currentpopulation, birthrate, deathrate);
		cout << i << "                " << currentpopulation << endl;
	}
}

