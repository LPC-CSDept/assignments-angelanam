#include<iostream>
#include<fstream>
//using this stream to write file
#include<string>
using namespace std;

int main()
{
    const unsigned short N=5;
    //using constant to define structure
    struct Scores{
        double sc[N];     
        string grade;
    //structure of scores created to input value N & grades
    };
    struct Grade{    
      string first;    
      string last;   
      string ssn;   
      Scores score;
    };
    //grade structure made to input name, ssn, score

    Grade g;
    int count = 1;

    ifstream ifs("grades.txt");
    //opening file to read
    ofstream ofs("grades");
    //opening binary file to write

    if (!ofs){
    //will display message if there's error in bin file
        cerr << "Error opening grades.bin\n";
        exit(0);
    }

    if (!ifs){
    //will display message if there's error in txt file
        cout << "Error opening grades.txt\n";
        exit(0);
    }



}