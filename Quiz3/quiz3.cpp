#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int main ()
{
    int random1, random2, random3;
	srand(time(0));
	
	random1 = rand() % 100 ;
	cout << "Random number 1: " << random1 << endl;

	random2 = rand() % 100 ;
	cout << "Random number 2: " << random2 << endl;

    random3 = rand() % 100 ;
    cout << "Random number 3: " << random3 << endl;

	int sum = random1 + random2 + random3;
    double avg = sum / 3.0;

    cout << setprecision(5) << fixed;
    cout << "Total amount: " << sum << endl;
    cout << "Average amount: " << avg << endl;
}