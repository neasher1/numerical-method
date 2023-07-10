
#include<bits/stdc++.h>
using namespace std;
#define MAX_ITER 1000000

double func(double x)
{
	return x*x*x - x - 4;
}

void regulaFalsi(double a, double b)
{
	if (func(a) * func(b) <= 0)
	{
		cout << "You have not assumed right a and b\n";
		return;
	}

	double c = a; // Initialize result

	for (int i=0; i < MAX_ITER; i++)
	{
		// Find the point that touches x axis
		c = (a*func(b) - b*func(a))/ (func(b) - func(a));

		// Check if the above found point is root
		if (func(c)==0)
			break;

		// Decide the side to repeat the steps
		else if (func(c)*func(a) < 0)
			b = c;
		else
			a = c;
	}
	cout << "The value of root is : " << c;
}

int main()
{
	double a =-200, b = 300;
	regulaFalsi(a, b);
	return 0;
}

