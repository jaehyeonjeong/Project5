#include "ConTest.h"

int main()
{
#if 1
	CON3* p_TEST = new CON3;

	//free(p_TEST);
	delete p_TEST;
#else
	CON3 obj;
#endif

	return 0;
}