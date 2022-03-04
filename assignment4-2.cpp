#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    int num1, num2, num3;
    int min, max;

    cout << "Enter 1st number: ";
    cin >> num1; //enter any number in terminal

    cout << "Enter 2nd number: ";
    cin >> num2; // "

    cout << "Enter 3rd number: ";
    cin >> num3; // "

    if (num1 < num2)
    {
        if (num1 < num3)
        min = num1; //smaller # is num1 if less than num2 & num3
        else
        min = num3; //if not, smaller # is num3 if less than num2
    }
    else //if above doesn't apply,
    {
        if (num2 < num3)
        min = num2; //smaller # is num2 if less than num1 & num3
        else
        min = num3; //if not, smaller # is num3 if less than num1
    }

    cout << "The smallest number here is: " << min << endl; //prints smallest number

    if (num1 > num2)
    {
        if (num1 > num3)
        max = num1; //bigger # is num1 if greater than num2 & num3
        else
        max = num3; //if not, bigger # is num3 if greater than num2
    }
    else
    {
        if (num2 > num3)
        max = num2; //bigger # is num2 if greater than num1 & num3
        else
        max = num3; //if not, bigger # is num3 if greater than num1
    }

    cout << "The biggest number here is: " << max << endl; //prints biggest number
}