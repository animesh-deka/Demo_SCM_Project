#include <iostream>
using namespace std;
int add(int, int);
{
    int num1, num2, sum;
    cout<<"Enters two numbers to add: ";
    cin >> num1 >> num2;
    sum = add(num1, num2);
    cout << "Sum = " << sum;
    return 0;
}

int add(int a, int b)
{
    int add;
    add = a + b;
    return add;
}

int multiplication(a,b)
{
	int multiply;
	multiply=a*b;
	return multiply;
}
