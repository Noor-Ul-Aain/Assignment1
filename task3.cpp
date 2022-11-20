#include"Name.h"
int nameCompare(Name name1, Name name2);
int main() {
	char firstName[50] = { 0 };
	char lastName[50] = { 0 };
	cout << "Enter first name:";//input for first name
	cin >> firstName;
	cout << "Enter last name:";//input for second name
	cin.ignore();
	cin >> lastName;
	cout << "Parameterized Constructor for n1:" << endl;
	Name n1(firstName, lastName);//checking parameterized constructor with default values
	cout << "Displaying n1:" << endl;
	n1.display();
	cout << "Copy Constructor for n2(copying n1 in n2):" << endl;//checking copy constructor
	Name n2(n1);//checking copy constructor
	cout << "Displaying n2:" << endl;
	n2.display();
	cout << "Using copyName() of the class Name to copy one name(first name and second name) to an other name." << endl;
	Name n3;
	n3.copyName(n1);
	cout << "Displaying n3:" << endl;
	n3.display();
	cout << "Using camalCase() on n1:" << endl;
	n1.camelCase();//checking camalCase()
	cout << "Displaying n1:" << endl;
	n1.display();
	cout << "Using toLower() on n1:" << endl;
	n1.toLower();//checking toLower()
	cout << "Displaying n1:" << endl;
	n1.display();
	cout << "Using toUpper() on n1:" << endl;
	n1.toUpper();//checking toUpper()
	cout << "Displaying n1:" << endl;
	n1.display();
	cout << "Length of the name in n1(total number of characters excluding black spaces and \0):" << endl;
	cout << n1.nameLength() << endl;//checking nameLength(total number of characters excluding black spaces and \0).
	cout << "Swapping the first name with last name and vice versa:" << endl;
	n1.swapNames();//checking swapNames()
	n1.display();
	cout << "Concatenating first name and last name in to one char* array:" << endl;
	char* temp = n1.fullName();//checking fullName()
	cout << temp << endl;
	delete[]temp;
	cout << "Checking that is this a valid name:" << endl;
	bool temp2 = n1.isValidName();//checking isValidName()
	if (temp2) {
		cout << "This is a valid name.It Contains only alphabets." << endl;
	}
	else
	{
		cout << "This is not a valid name!!!It dose not Contains alphabets only." << endl;
	}
	cout << "Comparing 2 names: " << endl;
	cout << "Enter first name:";//input for first name
	cin.ignore();
	cin >> firstName;
	cout << "Enter last name:";//input for second name
	cin.ignore();
	cin >> lastName;
	Name nComp1(firstName, lastName);
	cout << "Enter first name:";//input for first name
	cin.ignore();
	cin >> firstName;
	cout << "Enter last name:";//input for second name
	cin.ignore();
	cin >> lastName;
	Name nComp2(firstName, lastName);
	cout << "Result of comparison: " << nameCompare(nComp1, nComp2) << endl;

	return 0;
}
int nameCompare(Name name1, Name name2) {
	bool matched = true;
	char* temp1 = name1.getLastName();
	char* temp2 = name2.getLastName();
	for (int i = 0; temp1[i] != '\0'; i++)
	{
		if (temp1[i] != temp2[i])
		{
			//matched = false;
			if (static_cast<int>(temp1[i]) > static_cast<int>(temp2[i]))
			{
				return 1;
			}
			else if (static_cast<int>(temp1[i]) < static_cast<int>(temp2[i]))
			{
				return -1;
			}
		}
	}
	delete[]temp1;
	delete[]temp2;
	/*if (matched)
	{*/
	temp1 = name1.getFirstName();
	temp2 = name2.getFirstName();
	for (int i = 0; temp1[i] != '\0'; i++)
	{
		if (temp1[i] != temp2[i])
		{
			//matched = false;
			if (static_cast<int>(temp1[i]) > static_cast<int>(temp2[i]))
			{
				return 1;
			}
			else if (static_cast<int>(temp1[i]) < static_cast<int>(temp2[i]))
			{
				return -1;
			}
		}
	}
	//}
	return 0;
}