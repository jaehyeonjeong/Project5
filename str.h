#ifndef _STR_H_
#define _STR_H_

#define MAX 50
#include <iostream>
#include <string>

using namespace std;

class StringCharArray : public string
{
public:
	StringCharArray(const char* str) : string(str){} //생성자 추가
	void toCharArray(char* str);
};

#else
#endif