#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream ofs; 
    int num, score1, score2; 
    string name; 

    ofs.open("student.txt");
    if (!ofs)
    {
        cerr << "File open error\n";
        exit(0);
    }

    cout << "Enter number of students: ";
    cin >> num;
    ofs << num << endl;

    for (int i=0; i<num; i++){
        cout << "Student name: ";
        cin >> name;
        cout << "1st score: ";
        cin >> score1;
        cout << "2nd score: ";
        cin >> score2;

        ofs << name << " " << score1 << " " << score2 
        << endl;
    }
    ofs.close();
}