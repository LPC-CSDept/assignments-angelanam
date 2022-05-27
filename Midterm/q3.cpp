#include <iostream>
#include <fstream>
//using this stream to write file

using namespace std;

int prevNum = 51;
//making this variable equal 51 to keep values between 1-50

int getRdnum (void){
//using this int to start return of randomized #s between 1-50
    return (rand()%50) + 1;
    //adding 1 so it'll include 50
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
}

int main ()
{
    int N = 10;
    //making this equal 10 to call 10 #s

    ofstream ofs("numbers.txt");
    //will open numbers.txt file in write mode
    if(!ofs){
    //will display this if file can't open due to program error
        cout << "open file error" << endl;
        return 1;
    }

    for (int i=0; i<N; i++){
    //iterates 10 times since it'll be 0-9
        int n = getRdnum();
        //generates the next random #
        cout << n << " ";
        //prints value
        if (isGreater(n))
        ofs << n << " ";
        //writes & prints value to the file
    }   
    ofs.close();
    return 0;
}


