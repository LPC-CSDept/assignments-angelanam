#include <iostream>
using namespace std;

int main()
{
    int begin, end, result;

    cout << "Enter lower prime number: ";
    cin >> begin;
    cout << "Enter upper prime number: ";
    cin >> end;

    cout << "The prime numbers between " << begin <<
    " and " << end << " are: ";

    for (begin; begin<=end; begin++){
        if (begin == 1 || begin == 0)
        result = 1;

        for (int i=2; i<=begin/2; ++i){
            if (begin % i == 0){
                result = 0;
            }

        }
    }
}