#include"MyChar.h"

char input(void);// takes input form the user the returns it.
void display(char);// displays the value which if pass to it.

int main() {
	char temp = input();// taking input
	/*
	• Make a single MyChar object by taking data from user.
	• Print a single MyChar object data on screen.
	*/
	MyChar n1(temp);// passing value to parameterized constructor. the parameterized constructor is the calling the setter for the attribute.
	n1.toUpperCaseCharacter();// this will convert the value of the number to uppercase if the number is lowercase.
	display(n1.characterGetter());
	n1.toLowerCaseCharacter();// this will convert the value of the character to lowercase if the number is uppercase.
	display(n1.characterGetter());
	/*
	• Make N MyChar objects by taking data from the user, where N is asked from the user.
	• Print N MyChar objects data on screen.
	• Sort the N MyChar objects by values.
	• Print the Sorted MyChar objects on screen.
	*/
	cout << "______________________________________________________" << endl;
	int noOfObjets = 0;
	cout << "Enter how many number of objects do you want to create: ";// asking the user to enter how many number of objects does he want to create.
	while (true)
	{
		cin >> noOfObjets;
		if (noOfObjets > 0)// validation for if the user enters a signed number it will take the input again.
		{
			break;
		}
		cout << "Invalid input!!!" << endl;
		cout << "Try Again: ";
	}
	MyChar* objs;
	objs = new MyChar[noOfObjets];
	cout << "_______________________________" << endl;
	cout << "setting values of all n objects" << endl;
	cout << "_______________________________" << endl;
	for (int i = 0; i < noOfObjets; i++)// setting values of all n objects By Using their setter.
	{
		cout << "Object no: " << i + 1 << endl;
		objs[i].characterSetter(input());// taking input and 
	}
	cout << "_____________________________________" << endl;
	cout << "Sorting n objects in ascending order:" << endl;
	cout << "_____________________________________" << endl;
	cout << "before sorting:" << endl;
	for (int i = 0; i < noOfObjets; i++)// displaying the Unsorted array of objects.
	{
		display(objs[i].characterGetter());
	}
	for (int i = 0; i < noOfObjets; i++)// Sorting n objects in ascending order;.
	{
		for (int j = i + 1; j < noOfObjets; j++)
		{
			if (static_cast<int>(objs[i].characterGetter()) > static_cast<int>(objs[j].characterGetter()))
			{
				temp = objs[j].characterGetter();
				objs[j].characterSetter(objs[i].characterGetter());
				objs[i].characterSetter(temp);
			}
		}
	}
	cout << "After sorting:" << endl;
	for (int i = 0; i < noOfObjets; i++)// displaying the sorted objects.
	{
		display(objs[i].characterGetter());
	}
	cout << "______________________________________________________________________________________________" << endl;
	cout << "Now applying toUpperCase() and toLowerCase() member function on this array of objects:" << endl;
	cout << "______________________________________________________________________________________________" << endl;
	for (int i = 0; i < noOfObjets; i++)//applying toUpperCaseNumber() and toLowerCaseNumber member function on this ray of objects and displaying the values
	{
		cout << "Object no" << i + 1 << ':' << endl;
		display(objs[i].characterGetter());
		objs[i].toUpperCaseCharacter();
		display(objs[i].characterGetter());
		objs[i].toLowerCaseCharacter();
		display(objs[i].characterGetter());
		cout << "_____________________________________" << endl;
		cout << "_____________________________________" << endl;
	}
	delete[]objs;
	return 0;
}

char input(void) {
	char temp;
	cout << "Enter a value(Alphabets Only): ";
	while (true)
	{
		cin >> temp;
		if ((temp >= 'A' && temp <= 'Z') || (temp >= 'a' && temp <= 'z'))
		{
			break;
		}
		else
		{
			cout << "invalid input!!!" << endl;
		}
		cout << "Try Again: ";
	}
	return temp;
}

void display(char temp) {
	cout << "Value: " << temp << endl;
}