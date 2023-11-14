#pragma once
#include <fstream>
#include <string>
using namespace std;

class readfile
{
protected:
	string path; // Path and/or file name
	string data;

public:
	readfile(); //constructeur
	void readdata();
	string getdata();
	~readfile();// destructeur
	
};

