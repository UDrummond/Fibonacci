//Michael Drummond
//Fibonacci Sequence
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int first = 0, second = 1, third;
	for (int a = 0; a<n - 1; a++)
	{
		if (n == 1)
		{
			cout << first << " " << second << " "<< third;
		}
		else
		{
			third = first + second;
			first = second;
			second = third;
		}
	}
	//Place within loop for all fibonacci numbers to be output
	cout << third << " " << endl;
	return 0;
}
