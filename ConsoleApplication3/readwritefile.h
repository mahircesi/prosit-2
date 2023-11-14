#pragma once
#include <fstream>
#include <string>
using namespace std;

class readwritefile
{
protected:
	string path; // Path and/or file name
	string data;

public:
	readwritefile(); //constructeur
	void readdata();
	string getdata();
	void writedata(string d);
	~readwritefile();// destructeur
	
};

