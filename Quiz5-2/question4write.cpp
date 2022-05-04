#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream ofs;
    int id;
    string name, dept;
    double num, salary;

    ofs.open("employee.txt");
    if (!ofs)
    {
        cerr << "File open error\n";
        exit(0);
    }

    cout <<
}