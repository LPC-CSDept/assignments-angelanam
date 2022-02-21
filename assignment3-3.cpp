#include <iostream>
using namespace std;

int main()
{
     double Celcius, Farenheit;

     cout << "Enter the temperature in celcius: ";
     cin >> Celcius;

     Farenheit = 9/5.0 * Celcius + 32;
     cout << Celcius << " degrees celcius in fahrenheit is " << Farenheit << endl;
}