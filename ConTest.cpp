#include "ConTest.h"

CON1::CON1(const int c)
{
	this->c = c;
	cout << "***CON1�� ������***" << endl;
	cout << "CON1 c=" << c << endl;
}

CON1::~CON1()
{
	cout << "***CON1�� �Ҹ���***" << endl;
}

CON2::CON2(const int c):CON1(300)
{
	this->c = c;
	cout << "***CON2�� ������***" << endl;
	cout << "CON2 c=" << c << endl;
}

CON2::~CON2()
{
	cout << "***CON2�� �Ҹ���***" << endl;
}

CON3::CON3():CON2(200)
{
	cout << "***CON3�� ������***" << endl;
}

CON3::~CON3()
{
	cout << "***CON3�� �Ҹ���***" << endl;
}
