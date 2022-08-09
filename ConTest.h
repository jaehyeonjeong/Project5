#ifndef _CONTEST_H_
#define _CONTEST_H_

#include <iostream>
using namespace std;

class CON1
{
public:
	CON1(const int c);
	~CON1();
protected:
	int c;
};

class CON2 : public CON1
{
public:
	CON2(const int c);
	~CON2();
protected:
	int c;
};

class CON3 : public CON2
{
public:
	CON3();
	~CON3();
};

#else
#endif
