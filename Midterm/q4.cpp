#include<iostream>
#include <ctime>

using namespace std;

int getRdnum(){
//using this int to generate random #s, w/ no parameters
    srand(time(0));
    //randomizes #s between 1-100
    return rand()%101;
}

 int getRdnum(int n2){
//this int will generate random #s, w/ one parameter of int 2
    srand(time(0));
    return rand()%(n2-1)+n2;
    //returns random # between 1-n2
 }

int getRdnum(int n1, int n2){
//this int will generate random #s,two parameters of int n1 & n2
    srand(time(0));
    return rand()%(1+n1)+n2;
    //staying between range of n1+1 & 2

