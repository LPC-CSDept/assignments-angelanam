#include <iostream>
using namespace std;

int main()
{
    const int N=3;
	const int M=2;

	for (int i=0; i<N<10;)
		for(int j=1; j<=M<=10;)
			cout << i << " " << j  << endl;
}