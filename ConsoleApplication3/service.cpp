#include "service.h"
#include "readwritefile.h"
#include "cryptfile.h"
#include <iostream>
#include <sstream>
#include <bitset>
#include <string>

service::service() {
	this->Odata = NULL;
	this->Odata2 = NULL;
}

service::~service() {

}

void service::read() { 
	this->Odata = new readwritefile(); //Object built
	Odata->readdata();
}
void service::write() {
	Odata->writedata(Odata2->getcrypteddata());
	delete Odata, Odata;
}
void service::crypt() {
	this->Odata2 = new cryptfile(); // Object2 built
	cout << "Which crypting method would you like ?" << endl;
	cout << "1.Cesar crypting\n 2.XOR crypting \n 3.Cesar + XOR crypting\n";
	int temp1;
	cin >> temp1;

	switch (temp1)
	{
	case 1:
		Odata2->cesar_crypt(Odata->getdata()); //Object2 CESARED
		break;
	case 2:
		Odata2->XOR_crypt(Odata->getdata()); //Object2 XORED
		break;
	case 3:
		Odata2->cesar_crypt(Odata->getdata()); //Object2 CESARED
		Odata2->XOR_crypt(Odata2->getcrypteddata()); //Object2 XORED
		break;
	}
}

void service::decrypt() {
	this->Odata2 = new cryptfile(); // Object2 built
	cout << "Which decrypting method would you like ?" << endl;
	cout << "1.Cesar crypting\n 2.XOR crypting \n 3.Cesar + XOR crypting\n";
	int temp1;
	cin >> temp1;

	switch (temp1)
	{
	case 1:
		Odata2->cesar_decrypt(Odata->getdata()); //Object2 DECESARED
		break;
	case 2:
		Odata2->XOR_decrypt(Odata->getdata()); //Object2 DEXORED
		break;
	case 3:
		Odata2->XOR_decrypt(Odata->getdata()); //Object2 DEXORED
		Odata2->cesar_decrypt(Odata2->getcrypteddata()); //Object2 DECESARED
		break;
		
	}
}