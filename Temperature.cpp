
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	// declear a varable of type float to store the user's input
	float F, Celcius;

	// Request  the user's input 
	cout << "Enter your Fareheit to calculate" << endl;

	//read the user's input
	cin >> F;
	 
	//using this formula 
	// (Fereheit - 32) x 5/9 = Celsius
	Celcius = (F - 32) * (5.0 / 9.0);
	cout << Celcius << endl;
	system("PAUSE");
	return 0;
}

