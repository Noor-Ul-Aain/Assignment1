#include "MyNum.h"

void MyNum::numberSetter(int temp)
{
	number = temp;
}

int MyNum::numberGetter(void)
{
	return number;
}

void MyNum::toPositiveNumber()
{
	if (numberGetter() < 0) {
		numberSetter(numberGetter() * -1);
		cout << "Converted to positive." << endl;
	}
	else {
		cout << "Already a positive number." << endl;
	}
}

void MyNum::toNegativeNumber()
{
	if (numberGetter() > 0) {
		numberSetter(numberGetter() / -1);
		cout << "Converted to negative." << endl;
	}
	else {
		cout << "Already a negative number." << endl;
	}
}

MyNum::MyNum(int temp)
{
	numberSetter(temp);
}
