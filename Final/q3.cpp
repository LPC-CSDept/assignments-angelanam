#include <iostream>
using namespace std;

bool Subset(int numbers1[], int numbers2[], int x, int y)
//using bool function to check if int numbers1 & numbers2 is a subset
{
    int i=0, j=0;
    //using two ints equal to 0 to test smaller/bigger number

    if (x>y)
    return 0;

    while (i<x && j<y){
    //using while loop to iterate until program ends
        if (numbers1[j] > numbers2[i])
        i++;
        //if value of numbers2 is less than numbers1, it will go into first array

        else if (numbers1[j] == numbers2[i]){
        //if both are equal then increments i & j
            j++;
            i++;
        }
    }
}
int main()
{
    const int SIZE1=5;
    const int SIZE2=10;
    int numbers1[SIZE1] = {2, 3, 5, 9, 10};
    int numbers2[SIZE2] = {1, 2, 3, 5, 9, 10, 11, 13, 15, 17};
}