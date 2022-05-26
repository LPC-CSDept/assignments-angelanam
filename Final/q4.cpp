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
    ofstream ofs("grades.bin", ios::out | ios::binary);
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

    while (count <= 16){
    //using while loop to store following info into txt file structure
        ifs>>g.first;
        ifs>>g.last;
        ifs>>g.ssn;
        ifs>>g.score.sc[0];
        ifs>>g.score.sc[1];
        ifs>>g.score.sc[2];
        ifs>>g.score.sc[3];
        ifs>>g.score.sc[4];
        ifs>>g.score.grade;

        ofs.write((char *) & g, sizeof(Grade));
        //writing structure g into binary file

        count++;
    }

    if(ofs.good()){
        cout << "Records from grades.txt successfully written in grades.bin";
    }

    else{
        cout <<"Error writing records in grades.bin";
    }

    ifs.close();
    ofs.close();

    return 0;
}