#include <iostream>
#include "Calculator.h"
using namespace std;

int main()
{

	double x = 0.0;
	double y = 0.0;
	double result = 0.0;
	char oper = '+';

	cout << "Calculator Console Application" << endl << endl;
	cout << "Enter the operation to perform. Available operations and format: a+b\n  a-b\n  a*b\n a/b"
		<< endl;

	Calculator c;
	while (true)
	{
		cin >> x >> oper >> y;
		if (oper == '/' && y == 0)
		{
			cout << "Division by 0 exception" << endl;
		}
		else
		{
			result = c.Calculate(x, oper, y);
		}
	
		cout << "Result is: " << result << endl;
	}
	return 0;
}
