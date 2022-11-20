#include"MyNum.h"

int input(void);// takes input form the user the returns it.
void display(int);// displays the value which if pass to it.

int main() {
	int temp = input();// taking input
	/*
	• Make a single MyNum object by taking data from user.
	• Print a single MyNum object data on screen.
	*/
	MyNum n1(temp);// passing value to parameterized constructor. the parameterized constructor is the calling the setter for the attribute.
	n1.toPositiveNumber();// this will convert the value of the number to positive if the number is negative.
	display(n1.numberGetter());
	n1.toNegativeNumber();// this will convert the value of the number to negative if the number is positive.
	display(n1.numberGetter());
	/*
	• Make N MyNum objects by taking data from the user, where N is asked from the user.
	• Print N MyNum objects data on screen.
	• Sort the N MyNum objects by values.
	• Print the Sorted MyNum objects on screen.
	*/
	cout << "______________________________________________________" << endl;
	int noOfObjets = 0;
	cout << "Enter how many number of objects do you want to create: ";// asking the user to enter how many number of objects does he want to create.
	while (true)
	{
		cin >> noOfObjets;
		if (noOfObjets > 0)// validation for if the user enters a signed integer it will take the input again.
		{
			break;
		}
		cout << "Invalid input!!!" << endl;
		cout << "Try Again: ";
	}
	MyNum* objs;
	objs = new MyNum[noOfObjets];
	cout << "_______________________________" << endl;
	cout << "setting values of all n objects" << endl;
	cout << "_______________________________" << endl;
	for (int i = 0; i < noOfObjets; i++)// setting values of all n objects By Using their setter.
	{
		cout << "Object no: " << i + 1 << endl;
		objs[i].numberSetter(input());// taking input and 
	}
	cout << "_____________________________________" << endl;
	cout << "Sorting n objects in ascending order:" << endl;
	cout << "_____________________________________" << endl;
	cout << "before sorting:" << endl;
	for (int i = 0; i < noOfObjets; i++)// displaying the Unsorted array of objects.
	{
		display(objs[i].numberGetter());
	}
	for (int i = 0; i < noOfObjets; i++)// Sorting n objects in ascending order;.
	{
		for (int j = i + 1; j < noOfObjets; j++)
		{
			if (objs[i].numberGetter() > objs[j].numberGetter())
			{
				temp = objs[j].numberGetter();
				objs[j].numberSetter(objs[i].numberGetter());
				objs[i].numberSetter(temp);
			}
		}
	}
	cout << "After sorting:" << endl;
	for (int i = 0; i < noOfObjets; i++)// displaying the sorted objects.
	{
		display(objs[i].numberGetter());
	}
	cout << "______________________________________________________________________________________________" << endl;
	cout << "Now applying toPositiveNumber() and toNegativeNumber member function on this array of objects:" << endl;
	cout << "______________________________________________________________________________________________" << endl;
	for (int i = 0; i < noOfObjets; i++)//applying toPositiveNumber() and toNegativeNumber member function on this ray of objects and displaying the values
	{
		cout << "Object no" << i + 1 << ':' << endl;
		display(objs[i].numberGetter());
		objs[i].toPositiveNumber();
		display(objs[i].numberGetter());
		objs[i].toNegativeNumber();
		display(objs[i].numberGetter());
		cout << "_____________________________________" << endl;
		cout << "_____________________________________" << endl;
	}
	delete[]objs;
	return 0;
}

int input(void) {
	int temp;
	cout << "Enter a value: ";
	cin >> temp;
	return temp;
}

void display(int temp) {
	cout << "Value: " << temp << endl;
}