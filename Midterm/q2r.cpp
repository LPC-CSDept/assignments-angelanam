#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream ifs; 
    int num, score1, score2;
    string name;
    double sum, avg;
    double avg80;

    ifs.open("student.txt");
    if (!ifs)
    {
        cerr << "File open error\n";
        exit(0);
    }

    ifs >> num;
    
    cout << "Name:\t" << "Score 1:\n" << "Score2:\t" 
    << endl;

    avg80 = 0;
    for (int i=0; i<num; i++){
        ifs >> name >> score1 >> score2;
        sum = score1 + score2; 
        avg = sum / 2;

        cout << name << "\t" << score1 << "\t" 
        << score2 << "\t" << endl;
        cout << "Sum:\t" << sum << "\t" <<
        "Average:\t" << avg << endl;
    }
}