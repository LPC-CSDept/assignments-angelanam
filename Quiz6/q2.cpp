#include <iostream>
#include <stdlib.h> 
using namespace std;

void genRandnum(int &n1, int &n2, int &n3)
{
    n1 = rand();
    n2 = rand();
    n3 = rand();
}

int findMin(int n1, int n2, int n3)
{
    if (n1<n2 && n1<n3)
    return n1;

    if (n2<n3 && n2<n1)
    return n2;

    return n3;
}

void printResult(int n1, int n2, int n3, int min)
{
    cout << "The three random numbers are:\n" << n1 << ", " 
    << n2 << ", " << n3 << endl;
    cout << "The minimum value is: " << min << endl;
}

int main ()
{
    
}
