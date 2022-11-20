#include "Name.h"
HelperFunctions helperObj;

void Name::setFirstName(char* temp)
{
	if (temp != nullptr)
	{
		int length = helperObj.strLength(temp);
		firstName = new char[length];
		for (int i = 0; i < length; i++)
		{
			firstName[i] = temp[i];
		}
	}
	else {
		firstName = nullptr;
	}
}

void Name::setLastName(char* temp)
{
	if (temp != nullptr)
	{
		int length = helperObj.strLength(temp);
		lastName = new char[length];
		for (int i = 0; i < length; i++)
		{
			lastName[i] = temp[i];
		}
	}
	else {
		lastName = nullptr;
	}
}

char* Name::getFirstName(void)
{
	int length = helperObj.strLength(firstName);
	char* temp = new char[length];
	for (int i = 0; i < length; i++)
	{
		temp[i] = firstName[i];
	}
	return temp;
}

char* Name::getLastName(void)
{
	int length = helperObj.strLength(lastName);
	char* temp = new char[length];
	for (int i = 0; i < length; i++)
	{
		temp[i] = lastName[i];
	}
	return temp;
}

Name::Name(char* first, char* last)
{
	setFirstName(first);
	setLastName(last);
}

Name::Name(const Name& tempObj)
{
	char* temp;
	int length = helperObj.strLength(tempObj.firstName);
	temp = new char[length];
	for (int i = 0; i < length; i++)
	{
		temp[i] = tempObj.firstName[i];
	}
	setFirstName(temp);
	delete[] temp;
	length = helperObj.strLength(tempObj.lastName);
	temp = new char[length];
	for (int i = 0; i < length; i++)
	{
		temp[i] = tempObj.lastName[i];
	}
	setLastName(temp);
	delete[] temp;
}

Name::~Name()
{
	if (firstName != nullptr)
	{
		delete[]firstName;
		firstName = nullptr;
	}
	if (lastName != nullptr)
	{
		delete[]lastName;
		lastName = nullptr;
	}
	cout << "~Name()" << endl;
}

void Name::copyName(Name& tempObj)
{
	setFirstName(tempObj.getFirstName());
	setLastName(tempObj.getLastName());
}

void Name::camelCase()
{
	if (static_cast<int>(firstName[0]) >= 97 && static_cast<int>(firstName[0]) <= 122)
	{
		firstName[0] = static_cast<char>(static_cast<int>(firstName[0]) - 32);
	}
	if (static_cast<int>(lastName[0]) >= 97 && static_cast<int>(lastName[0]) <= 122)
	{
		lastName[0] = static_cast<char>(static_cast<int>(lastName[0]) - 32);
	}
}

void Name::toLower()
{
	int length = helperObj.strLength(firstName);
	for (int i = 0; i < length; i++)
	{
		if (firstName[i] >= 65 && firstName[i] <= 90)
		{
			firstName[i] = static_cast<char>(static_cast<int>(firstName[i]) + 32);
		}
	}
	length = helperObj.strLength(lastName);
	for (int i = 0; i < length; i++)
	{
		if (lastName[i] >= 65 && lastName[i] <= 90)
		{
			lastName[i] = static_cast<char>(static_cast<int>(lastName[i]) + 32);
		}
	}
}

void Name::toUpper()
{
	int length = helperObj.strLength(firstName);
	for (int i = 0; i < length; i++)
	{
		if (firstName[i] >= 97 && firstName[i] <= 122)
		{
			firstName[i] = static_cast<char>(static_cast<int>(firstName[i]) - 32);
		}
	}
	length = helperObj.strLength(lastName);
	for (int i = 0; i < length; i++)
	{
		if (lastName[i] >= 97 && lastName[i] <= 122)
		{
			lastName[i] = static_cast<char>(static_cast<int>(lastName[i]) - 32);
		}
	}
}

int Name::nameLength()
{
	int length1 = helperObj.strLength(firstName) - 1;
	int length2 = helperObj.strLength(lastName) - 1;
	return length1 + length2;
}

void Name::swapNames()
{
	char* temp = getFirstName();
	delete[] firstName;
	firstName = getLastName();
	delete[]lastName;
	setLastName(temp);
	delete[]temp;
	temp = nullptr;
}

void Name::display()
{
	if (firstName != nullptr)
	{
		cout << firstName << ' ';
	}
	if (lastName != nullptr)
	{
		cout << lastName;
	}cout << endl;
}

char* Name::fullName()
{
	int length1 = helperObj.strLength(firstName);
	int length2 = helperObj.strLength(lastName);
	char* fullName = new char[nameLength() + 2];
	for (int i = 0; i < length1 - 1; i++)
	{
		fullName[i] = firstName[i];
	}
	fullName[length1 - 1] = ' ';
	for (int i = 0; i < length2; i++)
	{
		fullName[length1 + i] = lastName[i];
	}
	return fullName;
}

bool Name::isValidName()
{
	int length = helperObj.strLength(firstName);
	for (int i = 0; i < length; i++)
	{
		if ((firstName[i] >= 'A' && firstName[i] <= 'Z') || (firstName[i] >= 'a' && firstName[i] <= 'z') || firstName[i] == ' ' || firstName[i] == '\0') {
			continue;
		}
		else {
			return false;
		}
	}
	length = helperObj.strLength(lastName);
	for (int i = 0; i < length; i++)
	{
		if ((lastName[i] >= 'A' && lastName[i] <= 'Z') || (lastName[i] >= 'a' && lastName[i] <= 'z') || lastName[i] == ' ' || lastName[i] == '\0') {
			continue;
		}
		else {
			return false;
		}
	}
	return true;
}
