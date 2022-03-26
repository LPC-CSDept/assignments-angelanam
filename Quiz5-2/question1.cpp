#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    const int N=5;
	int 	rdnum;
	int 	min;
    
    srand(time(0));

	for(int i=0;i<N;i++)
    {
		rdnum = rand() % 100;	
		cout << rdnum << "\t";
		if ((i==0) || ( min > rdnum))
			min = rdnum;
	}
	cout << "The minimum value: " << min << endl;
}