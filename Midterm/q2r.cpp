#include <iostream>
#include <fstream>
//using this stream to read file
using namespace std;

int main()
{
    ifstream ifs; 
    int num, score1, score2;
    //obtaining values inputted on written file
    string name;
    double sum, avg;
    double avg80;

    ifs.open("student.txt");
    if (!ifs)
    //will print this if there's program error
    {
        cerr << "File open error\n";
        exit(0);
    }

    ifs >> num;
    
    cout << "Name:\t" << "Score 1:\t" << "Score2:\t" 
    << endl;

    for (int i=0; i<num; i++){
    //for loop used to state functions & do calculations 
        ifs >> name >> score1 >> score2;
        sum = score1 + score2; 
        avg = sum / 2;
         
        cout << name << "\t" << score1 << "\t" 
        << score2 << "\t" << endl;
        cout << "Sum:\t" << sum << "\t" <<
        "Average:\t" << avg << endl;
    }
    avg = 0;
    if(avg>80)
    //using if statement to test if avg value is over 80
    avg += num;
    //will assign # of students into avg who got over 80
    
    //will revise this part later to properly display it

     cout << "Number of students who averaged over 80: "
    << num;
}