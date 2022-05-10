#include <iostream>
using namespace std;

void swapTwoValues (int n1, int n2)
{
    int temp;
    cout << "Enter integer 1: ";
    cin >> n1;
    cout << "Enter integer 2: ";
    cin >> n2;

    cout << "Integer 1 = " << n1 << ", Integer 2 = "
    << n2 << endl;
    temp = n1;
    n1 = n2;
    n2 = temp;

    cout << "Now swapping places, Integer 1 = " << n1 <<
    ", and Integer 2 = " << n2 << endl;
}

void swapTwoValues (float f1, float f2)
{
    int temp;
    cout << "Enter float 1: ";
    cin >> f1;
    cout << "Enter float 2: ";
    cin >> f2;

    cout << "Float 1 = " << f1 << ", Float 2 = " 
    << f2 << endl;
    temp = f1;
    f1 = f2;
    f2 = temp;

    cout << "Now swapping places, Float 1 = " << f1 <<
    ", and Float 2 = " << f2 << endl;

}

int main()
{
    int n1, n2;
    float f1, f2;
    swapTwoValues(n1,n2);
    swapTwoValues(f1,f2);
    
    return 0;
}