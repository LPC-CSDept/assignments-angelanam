#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    char month1[10], month2[10], month3[10];
    double rain1, rain2, rain3;

    cout << "Enter the first month: ";
    cin >> month1;

    cout << "Enter the rainfall for " << month1 << " :";
    cin >> rain1;

    cout << "Enter the second month: ";
    cin >> month2;

    cout << "Enter the rainfall for " << month2 << " :";
    cin >> rain2;

    cout << "Enter the third month: ";
    cin >> month3;

    cout << "Enter the rainfall for " << month3 << " :";
    cin >> rain3;

    double average = (rain1 + rain2 + rain3) / 3.0;

    cout << setprecision(2) << fixed;
    cout << "The average rainfall for ";
    cout << month1 << ", ";
    cout << month2 << ", and ";
    cout << month3 << " is: " << average << " inches." << endl;

return 0;
}