#include <iostream>
#include "service.h"
#include <iostream>
#include <sstream>
#include <bitset>
#include <string>



int main()
{
	int temp;
	cout << "Hello, what would you like to do ? " << endl;
	cout << "1 : CRYPT a file" << endl;
	cout << "2 : DECRYPT a file" << endl;
	cin >> temp; cout << endl;

	if (temp == 1) {
		cout << "You want to CRYPT." << endl;
		service S;
		S.read();
		S.crypt();
		S.write();
	}
	if(temp == 2) {
		cout << "You want to DECRYPT." << endl;
		service S2;
		S2.read();
		S2.decrypt();
		S2.write();
	}
} 




