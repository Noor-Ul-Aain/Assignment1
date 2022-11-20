#pragma once
#include<iostream>
using namespace std;
class MyChar
{
private:
	char character;
public:
	void characterSetter(char);// sets the value of the private attribute(character).
	char characterGetter(void);// gets the value of the private attribute(character).
	void toUpperCaseCharacter();// converts the value of the object's attribute(character) to positive.
	void toLowerCaseCharacter();// converts the value of the object's attribute(character) to negative.
	MyChar(char = 0);// its a parameterized constructor which sets the value of the private attribute(character),if no argument will be given the; it will set the value of the private attribute to 0 due to the default argument.

};

