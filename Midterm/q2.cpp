#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream ofs; 
    int id, num; 
    string name, dept; 
    double salary; 
    
    ofs.open("student.txt");
    if (!ofs)
    {
        cerr << "File open error\n";
        exit(0);
    }
}