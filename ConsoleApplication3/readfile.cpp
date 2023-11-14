#include "readfile.h"
#include <iostream>

readfile::readfile() { //constructeur
    this->path = "";
    this->data = "";

}

readfile::~readfile() { //destructeur

}

void readfile::readdata(){
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

string readfile::getdata() {
    return data;
}