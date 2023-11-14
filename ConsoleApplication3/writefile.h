#pragma once
#include <string>
using namespace std;

class writefile
{
private:
	string datatowrite;
public:
	writefile();
	void writedata();
	void setdata(string d);
	~writefile();
};

