#include <iostream>
#include <ctime>
#include <fstream>
//using this stream to write file

using namespace std;

int prevNum = 0;
//making this variable equal 0 to keep previous value once entered

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
        return 1;    
    }

    else{
    //if n is less than prevNum, returns to 0
    //will not call value
        return 0;
    }

}


