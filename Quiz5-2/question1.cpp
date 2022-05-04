#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    const int N=5;   //set to 5 to print 5 #'s
	int 	rdnum;
	int 	min;
    
    srand(time(0));

	cout << "5 random numbers: " << endl;

	for(int i=0;i<N;i++)
    {
		rdnum = rand() % 100; //generates random #'s 0-100
		cout << rdnum << ", \t";
		if ((i==0) || ( min > rdnum))
			min = rdnum;
	}
	cout << "The minimum value is: " << min << endl;
}