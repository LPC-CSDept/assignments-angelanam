#include <fstream>
using namespace std;

int main()
{
    ifstream ifs; //input info from written file on employee.txt
    int id, num;
    string name, dept;
    double salary;
    double sum, avg;

    ifs.open("employee.txt");
    if (!ifs)
    {
        cerr << "File open error\n";
        exit(0);
    }

    ifs >> num;
    cout << "ID:\t" << "Name:\n" << "Department:\t" 
    << "Salary\t" << endl;

    sum = 0;
    for (int i=0; i<num; i++){
        ifs >> id >> name >> dept >> salary;
        sum += salary;
        cout << id << "\t" << 
    }
}