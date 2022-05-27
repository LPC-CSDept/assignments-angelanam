#include<iostream>
#include <fstream>
//using this stream to write file 

using namespace std;

void getInput (int *num1, int *num2)
//using this void function to enter 2 values
{
    cout << "Enter first number: ";
    cin >> *num1;
    cout << "Enter second number: ";
    cin >> *num2;
    //using asterisks for variables 
}

void isSame (int num1, int num2)
//this function checks if the two #s are same
{
    if (num1 == num2){
    //if both values are same, program will quit   
        cout << "Both numbers are same, run program again.";
        exit (0);  
    }
}

int intDivision (int n1, int n2)
//this function will be used to divide the two #s
{
    int result;
    //using this int to declare result of equation
    if (n1 < n2){
    //if value of num1 is less than num2, num2 will be divided by num1
        result = n2/n1;
        return result;    
    }

    else{
    //if num2 is less than num1, num1 will be divided by num2
        result = n1/n2;
        return result;
    }
}

