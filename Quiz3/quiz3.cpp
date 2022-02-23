#include <iostream>
#include <cstdlib> //standard library
#include <ctime> //
#include <iomanip> //
using namespace std;

int main ()
{
    int random1, random2, random3;
	srand(time(0));
	
	random1 = rand() % 100 ; //generates random number between 0-99
	cout << "Random number 1: " << random1 << endl; //prints random #1

	random2 = rand() % 100 ; //0-99
	cout << "Random number 2: " << random2 << endl; //prints random #2

    random3 = rand() % 100 ; //0-99
    cout << "Random number 3: " << random3 << endl; //prints random #3

	int sum = random1 + random2 + random3; //adds total number of the random numbers
    double avg = sum / 3.0; //dividing total by 3 to calculate average

    cout << setprecision(5) << fixed; //sets average amount in 5 decimal places
    cout << "Total amount: " << sum << endl; //prints total amount of the numbers
    cout << "Average amount: " << avg << endl; //prints average amount 5 decimal places
}