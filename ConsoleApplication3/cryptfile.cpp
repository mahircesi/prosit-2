#include "cryptfile.h"
#include <iostream>
#include <sstream>
#include <bitset>
#include <string>
#include <fstream>
using namespace std;

cryptfile::cryptfile() {
    this->crypteddata = "";
    this->decrypteddata = "";
}
cryptfile::~cryptfile() {

}


void cryptfile::cesar_crypt(string d) {
    cout << "Crypting file (Cesar)...." << endl;
    this->crypteddata = d;
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

void cryptfile::cesar_decrypt(string d) {
    cout << "Decrypting Cesar ...." << endl;
    this->crypteddata = d;
    //cout << crypteddata << endl;
    int i = 0;
    while (d[i] != '\0')
    {
        if (crypteddata[i] > 'A' && crypteddata[i] <= 'Z') {
            char c = crypteddata[i] - 'A';
            c -= 3;
            c = c % 26;
            crypteddata[i] = c + 'A';
        }
        if (crypteddata[i] > 'a' && crypteddata[i] <= 'z') {
            char c = crypteddata[i] - 'a';
            c -= 3;
            c = c % 26;
            crypteddata[i] = c + 'a';
        }
        i++;
    }
    cout << "Cesar decrypted." << endl;
}
string cryptfile::getcrypteddata() {
    return crypteddata;
}

void cryptfile::XOR_crypt(string d) {
    cout << "XOR Crypting....\n";
    crypteddata = "";
    for (size_t i = 0; i < d.size(); ++i)
    {
        string temp = "";
        string key = "01010101";
        temp += bitset<8>(d.c_str()[i]).to_string();
        for (size_t ii = 0; ii < key.size(); ++ii) {
            if (key[ii] != temp[ii]) {
                crypteddata += "1";
            }
            else {
                crypteddata += "0";
            }
        }
    }
    cout << "Ended XOR crypting.\n";
}
void cryptfile::XOR_decrypt(string d) {
    cout << "XOR Derypting....\n";
    string key = "01010101";
    for (size_t i = 0; i < d.size(); ++i) {
        if (key[i%8] != d[i]) {
            decrypteddata += "1";
        }
        else {
            decrypteddata += "0";
        } //decrypted data is a binary string no xor anymore.
    }
    stringstream sstream(decrypteddata);
    while (sstream.good())
    {
        bitset<8> bits;
        sstream >> bits;
        char c = char(bits.to_ulong());
        crypteddata += c;
    }
    cout << "Ended XOR Decrypting.\n";
}
string cryptfile::getdecrypteddata() {
    return decrypteddata;
}