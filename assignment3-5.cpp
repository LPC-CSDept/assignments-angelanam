#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip> 
using namespace std;

int main ()
{
    int num1, num2, num3;
	srand(time(0));
	
	num1 = rand() % 100 ; 
	cout << "Random number 1: " << num1 << endl; 

	num2 = rand() % 100 ;
	cout << "Random number 2: " << num2 << endl; 

    num3 = rand() % 100 ;
    cout << "Random number 3: " << num3 << endl;

	int sum = num1 + num2 + num3;
    double avg = sum / 3.0;

    cout << setprecision(2) << fixed;
    cout << "Total amount: " << sum << endl;
    cout << "Average amount: " << avg << endl;
}