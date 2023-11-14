#pragma once
#include <string>
#include "readfile.h"
using namespace std;
class cryptfile : public readfile
{
private:
	string crypteddata;

public:
	cryptfile();
	void cesar(string d);
	string getcrypteddata();
	~cryptfile();
};

