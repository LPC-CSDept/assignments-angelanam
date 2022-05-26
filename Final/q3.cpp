#include <iostream>
using namespace std;

bool Subset(int numbers1[], int numbers2[], int x, int y)
//using function to check if int numbers1 & numbers2 is a subset
{
    int i=0, j=0;
    //using two ints equal to 0 to test smaller/bigger number

    if (x>y)
    return 0;

    while (i<x && j<y){
    //using while loop to iterate until program ends
        if (numbers1[j] > numbers2[i])
        i++;
        //if value of j in numbers2 is less than value i in numbers1, it will go into first array

        else if (numbers1[j] == numbers2[i]){
        //if both are equal then will increase by amounts of i & j
            j++;
            i++;
        }

        else if (numbers1[j] < numbers2[i])
        //if value of j in numbers1 is less than i value in numbers2, will break
            return 0;
    }
    
    return (j<x)? true: false;
    //using this return value for bool to declare a true or false statement
}
int main()
//in main re-call the values & print result of whether they are a subset or not
{
    const int SIZE1=5;
    const int SIZE2=10;
    int numbers1[SIZE1] = {2, 3, 5, 9, 10};
    int numbers2[SIZE2] = {1, 2, 3, 5, 9, 10, 11, 13, 15, 17};

    if (Subset (numbers1, numbers2, SIZE1, SIZE2)){
    //if the values are a subset, will print result
        cout << "The two arrays are a subset";
    }
    else{
    //will print this if they are not a subset
        cout << "The two arrays are not a subset";
    }
     return 0;
}