#include <iostream>
using namespace std;

int main()
{
    int begin, end, flag;

    cout << "Enter lower prime number: ";
    cin >> begin;
    cout << "Enter upper prime number: ";
    cin >> end;

    cout << "The prime numbers between " << begin <<
    " and " << end << " are: ";

    for (int begin; begin<=end; begin++){
        if (begin == 1 || begin == 0)
        //prime number can't be 0 or 1
        continue;
        //using this to go to next iteration
        flag = 1;

        for (int i=2; i<=begin/2; ++i){
        //nested loop, creates loop to print 2 to upper prime #
            if (begin % i == 0){
                flag = 0;
                break;
            }

        }
        if (flag == 1)
        //prints prime #s in order of low to high
        cout << begin << " ";
    }
    return 0;
}