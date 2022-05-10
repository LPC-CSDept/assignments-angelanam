#include <iostream>
using namespace std;

void swapTwoValues (int n1, int n2)
{
    int temp;
    cout << "Enter integer 1: " << endl;
    cin >> n1;
    cout << "Enter integer 2: " << endl;
    cin >> n2;

    cout << "integer 1 = " << n1 << " integer 2 = "
    << n2 << endl;
    temp = n1;
    n1 = n2;
    n2 = temp;

    cout << "Swapping places, integer 1 is now " << n1 <<
    ", and integer 2 is " << n2 << endl;
}