#include "str.h"

int main()
{
	StringCharArray str("jeong jae hyeon");
	char name[MAX];
	str.toCharArray(name);
	cout << name << endl;

	return 0;
}