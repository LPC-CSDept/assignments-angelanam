#include <iostream>
#include <ctime>
#include <fstream>
//using this stream to write file

using namespace std;

int prevNum = 51;
//making this variable equal 51 to keep values between 1-50

int getRdnum (void){
//using this int to start return of randomized #s between 1-50
    return rand()%51;
    //making it 51 so it'll include 50
}   

int isGreater (int n){
//using this int to check if n is less/greater than prevNum
    if (n > prevNum){
    //if value of n is greater than prevNum, it'll return to 1
    //returns & calls the value
        prevNum = n;
        return 1;    
    }

    else{
    //if n is less than prevNum, returns to 0
    //will not call value
        prevNum = n;
        return 0;
    }
    return 1;
}

int main ()
{
    srand (time(0));
    //randomizes all #s
    int N = 10;
    //making this equal 10 to call 10 #s

    ofstream ofs("numbers.txt");
    //will open numbers.txt file in write mode
    if(!ofs){
    //will display this if file can't open due to program error
        cout << "open file error" << endl;
        exit (0);
    }

    for (int i=0; i<10; i++){
    //iterates 10 times since it'll be 0-9
        int n = getRdnum();
        //generates the next random #
        cout << n << " ";
        //prints all values on terminal
        if (isGreater(n))
        ofs << n << " ";
        //writes & prints requested values to file
    }   
    ofs.close();
    return 0;
}


