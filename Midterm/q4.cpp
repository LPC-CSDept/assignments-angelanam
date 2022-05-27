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
    return rand()%(n2+1);
    //returns random # between 1-n2
 }

int getRdnum(int n1, int n2){
//this int will generate random #s,two parameters of int n1 & n2
    srand(time(0));
    return rand()%(n2-(n1+1))+1;
    //staying between range of n1+1 & n2
}

int main()
//calling three functions on main to run & print outcome
{
    cout << getRdnum() << endl;
    cout << getRdnum(50) << endl;
    cout << getRdnum(70,90) << endl;
}
