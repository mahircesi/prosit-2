#pragma once
#include <string>
#include "readwritefile.h"
using namespace std;
class cryptfile : public readwritefile
{
private:
	string crypteddata;
	string decrypteddata;

public:
	cryptfile();
	void cesar_crypt(string d);
	void cesar_decrypt(string d);
	void XOR_crypt(string d);
	void XOR_decrypt(string d);
	string getcrypteddata();
	string getdecrypteddata();
	~cryptfile();
};

