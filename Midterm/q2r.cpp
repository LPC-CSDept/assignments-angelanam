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

    sum = 0;
    for (int i=0; i<num; i++){

    }
}