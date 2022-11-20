#include "MyChar.h"

void MyChar::characterSetter(char temp)
{
	character = temp;
}

char MyChar::characterGetter(void)
{
	return character;
}

void MyChar::toUpperCaseCharacter()
{
	int temp = static_cast<char>(characterGetter());
	if (temp >= 97 && temp <= 122) {
		characterSetter(static_cast<char>(temp - 32));
		cout << "Converted to UpperCase." << endl;
	}
	else {
		cout << "Already an UpperCase." << endl;
	}
}

void MyChar::toLowerCaseCharacter()
{
	int temp = static_cast<char>(characterGetter());
	if (temp >= 65 && temp <= 90) {
		characterSetter(static_cast<char>(temp + 32));
		cout << "Converted to LowerCase." << endl;
	}
	else {
		cout << "Already an LowerCase." << endl;
	}
}

MyChar::MyChar(char temp)
{
	characterSetter(temp);
}
