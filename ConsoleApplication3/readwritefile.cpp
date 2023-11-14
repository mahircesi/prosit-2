#include "readwritefile.h"
#include <iostream>

readwritefile::readwritefile() { //constructeur
    this->path = "";
    this->data = "";
}

readwritefile::~readwritefile() { //destructeur

}

void readwritefile::readdata(){
    cout << "Specify the path or the file name" << endl;
    cin >> path;
    cout << "\n";
	ifstream file(path);
    if (file)
    {   
        cout << "File found, reading data..." << endl;
        string line; 
        while (getline(file, line)) 
        {
            data.append(line);
            data.append("\n");
        }
        cout << "Data read." << endl; cout << "\n" << endl;
    }
    else
    {
        cout << "Unable to read file" << endl;
    }
}

string readwritefile::getdata() {
    return data;
}


void readwritefile::writedata(string d) {
    cout << "Specify the path and the file name for you encrypted file" << endl;
    string crypath;
    cin >> crypath;
    ofstream MyFile(crypath);
    MyFile << d;
    MyFile.close();
}