#include <iostream>
using namespace std;

int main()
{
    int N, M;
	const int min=0, max=10;
	int result=1; 
	//set to 1 to multiply base number by itself 

	cout << "Enter the base number: ";
	cin >> N;
	cout << "Enter the exponent: ";
	cin >> M;

	cout << "Each power of " << N << "^" << 
    M << " is:\n";

	if (N<max && N>min){
		for (int i=0; i<M; i++) 
		//loop creates each exponent amount
		{
			result *= N;
			cout << result << endl;
		}
	}

	return 0;
}