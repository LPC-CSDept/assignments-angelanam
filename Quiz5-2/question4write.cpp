#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream ofs; //output to write file employee.txt
    int id, num; //employee ID & # of employees
    string name, dept; //employee name & their department
    double salary; //salary is doubled since will be divided

    ofs.open("employee.txt");
    if (!ofs)
    {
        cerr << "File open error\n";
        exit(0);
    }

    cout << "Number of employees: ";
    cin >> num;
    ofs << num << endl;

    for (int i=0; i<num; i++){
        cout << "Employee ID: ";
        cin >> id;
        cout << "Employee name: ";
        cin >> name;
        cout << "Department area: ";
        cin >> dept;
        cout << "Salary: ";
        cin >> salary;

        ofs << id << " " << name << " " << dept << 
        " " << salary << endl;
    }
    ofs.close();
}