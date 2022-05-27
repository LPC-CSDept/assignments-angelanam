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
    //using asterisks to assign variables as pointers (towards getInput)
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

void fileWrite (int num1)
//this function will open numbers.txt in write mode & store values
{
    ofstream ofs("numbers.txt");
    ofs << num1;
    ofs.close();
}

int main ()
//re-calls all variables & functions to print program output
{
    int n1, n2; //declaring the two variables
    getInput (&n1, &n2); //calls function to pass address of two variables
    isSame (n1, n2); //calls function to pass value of two variables
    int result = intDivision (n1, n2); //calls function to pass value 
    //& store the return value in int result
    cout << result; //prints value of result
    fileWrite (result); //calls function to write data on the file
}

