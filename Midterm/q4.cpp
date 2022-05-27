#include<iostream>
#include <ctime>

using namespace std;

int getRdnum(){
//using this int to generate random #s, w/ no parameters
    srand(time(0));
    //randomizes #s between 1-100
    return rand()%101;
}
