//Calculate.cpp
//calculate the sum of the integers from 1 to 10 using while command
#include <iostream>
using namespace std;

int main()
{

	int sum = 0;
	int x = 1;

	while (x <= 10) // while x is less than or equal to 10
	{
		sum += x; // add x to sum
		++x; // increment x
	}

	cout << "The sum is: " << sum << endl;
	system("pause");
} // end class
