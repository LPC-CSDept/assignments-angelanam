#include <iostream>
using namespace std;

void swapTwoValues (int n1, int n2)
{
    int temp;
    cout << "Enter integer 1: ";
    cin >> n1;
    cout << "Enter integer 2: ";
    cin >> n2;

    cout << "Integer 1 = " << n1 << " Integer 2 = "
    << n2 << endl;
    temp = n1;
    n1 = n2;
    n2 = temp;

    cout << "Now swapping places, integer 1 = " << n1 <<
    ", and integer 2 = " << n2 << endl;
}

int main()
{
    int n1, n2;
    swapTwoValues(n1,n2);

    return 0;
}