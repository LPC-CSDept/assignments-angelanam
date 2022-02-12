#include <iostream>
using namespace std;

int main ()
{
    int numFemale;
    int numMale;

    cout << "Number of female students in class: ";
    cin >> numFemale;
    cout << "Number of male students in class: ";
    cin >> numMale;

    int total = numFemale + numMale;

    cout << "Total number of students: " << total << endl;

    double perFemale = (numFemale * 100.0 / total);
    double perMale = (numMale * 100.0 / total);

    cout << "Percent of females in class: " << perFemale << "%" << endl;
    cout << "Percent of males in class: " << perMale << "%" << endl;

return 0;
}
