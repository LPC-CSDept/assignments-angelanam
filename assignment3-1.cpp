#include <iostream>
using namespace std;

int main()
{
    int classA, classB, classC;

    int priceA, priceB, priceC;

    priceA = 15;
    priceB = 12;
    priceC = 9;

    cout << "Number of tickets sold for Class A: ";
    cin >> classA;
    cout << "Number of tickets sold for Class B: ";
    cin >> classB;
    cout << "Number of tickets sold for Class C: ";
    cin >> classC;

    int total = (classA * priceA) + (classB * priceB) + (classC * priceC);
    
    cout << "Total price of tickets sold: $" << total << endl;

return 0;
}