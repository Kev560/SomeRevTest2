#include <iostream>
#include <string>
#include "Rev.h"

using namespace std;

int main()
{
	Rev obj1, obj2, result;
	cout << "Enter num1" << endl;
	cin >> obj1;
	cout << "Enter num2" << endl;
	cin >> obj2;
	result = obj1 + obj2;
	cout << result << endl;
	result = obj1 - obj2;
	cout << result << endl;
	system("pause");
	return 0;
}