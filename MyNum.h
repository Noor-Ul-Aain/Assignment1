#pragma once
#include<iostream>
using namespace std;
class MyNum
{
private:
	int number;
public:
	void numberSetter(int);// sets the value of the private attribute(number).
	int numberGetter(void);// gets the value of the private attribute(number).
	void toPositiveNumber();// converts the value of the object's attribute(number) to positive.
	void toNegativeNumber();// converts the value of the object's attribute(number) to negative.
	MyNum(int = 0);// its a parameterized constructor which sets the value of the private attribute(number),if no argument will be given the; it will set the value of the private attribute to 0 due to the default argument.
};
