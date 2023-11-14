#include "cryptfile.h"
#include <iostream>
#include <fstream>
using namespace std;

cryptfile::cryptfile() {
    this->crypteddata = "";
}
cryptfile::~cryptfile() {

}


void cryptfile::cesar(string d) {
    cout << "Crypting file (Cesar)...." << endl;
    this->crypteddata =d;
    int i = 0;
    while (crypteddata[i] != '\0') 
    {
        if (crypteddata[i] >= 'A' && crypteddata[i] <= 'Z') {
            char c = crypteddata[i] - 'A';
            c += 3;
            c = c % 26;
            crypteddata[i] = c + 'A';
        }
        if (crypteddata[i] >= 'a' && crypteddata[i] <= 'z') {
            char c = crypteddata[i] - 'a';
            c += 3;
            c = c % 26;
            crypteddata[i] = c + 'a';
        }
        i++;
    }
    cout << "File crypted." << endl;
}

string cryptfile::getcrypteddata() {
    return crypteddata;
}

