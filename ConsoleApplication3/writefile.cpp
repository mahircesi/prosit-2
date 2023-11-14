#include "writefile.h"
#include <iostream>
#include <fstream>
using namespace std;

writefile::writefile() {
    this->datatowrite = "";
}

writefile::~writefile() {

}

void writefile::setdata(string d) {
    this->datatowrite = d;
}

void writefile::writedata() {
    cout << "Specify the path and the file name for you encrypted file" << endl;
    string crypath;
    cin >> crypath;
    ofstream MyFile(crypath);
    MyFile << datatowrite;
    MyFile.close();
}