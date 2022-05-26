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

}