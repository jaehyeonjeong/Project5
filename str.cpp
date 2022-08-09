#include "str.h"

void StringCharArray::toCharArray(char* str)
{
	int i, len = this->length();

	for (i = 0; i < len; i++)
		*(str + i) = this->at(i); //해당글자의 문자를 반환

	*(str + i) = '\0';

}