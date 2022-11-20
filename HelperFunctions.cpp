#include "HelperFunctions.h"

int HelperFunctions::strLength(const char* temp)
{
	int length = 0;
	while (temp[length] != '\0')
	{
		length++;
	}
	length++;
	return length;
}
