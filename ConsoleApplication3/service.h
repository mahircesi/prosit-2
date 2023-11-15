#pragma once
#include <string>
#include "readwritefile.h"
#include "cryptfile.h"

using namespace std;

class service
{private:
	readwritefile *Odata;
	cryptfile* Odata2;
public:
	service();
	void read();
	void crypt();
	void write();
	void decrypt();
	~service();

};

