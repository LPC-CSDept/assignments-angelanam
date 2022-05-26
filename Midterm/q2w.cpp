#include <iostream>
#include <fstream>
//using this stream to write file

using namespace std;

int main()
{
    ofstream ofs; 
    int num, score1, score2; 
    string name;
    //program will ask to input for each variable 

    ofs.open("student.txt");
    if (!ofs)
    //will display this if written file can't be opened
    {
        cerr << "File open error\n";
        exit(0);
    }

    cout << "Enter number of students: ";
    cin >> num;
    ofs << num << endl;
    //# of students will be saved into file

    for (int i=0; i<num; i++){
    // for loop is used to display each variable info based on # of students
        cout << "Student name: ";
        cin >> name;
        cout << "1st score: ";
        cin >> score1;
        cout << "2nd score: ";
        cin >> score2;

        ofs << name << " " << score1 << " " << score2 
        << endl;
        //name & two scores will be saved into file
    }
    ofs.close();
}