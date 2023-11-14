#include <iostream>
#include "readfile.h"
#include "cryptfile.h"
#include "writefile.h"

readfile test;
cryptfile test2;
writefile test3;

int main()
{
    test.readdata();
    test2.cesar(test.getdata());    
    test3.setdata(test2.getcrypteddata());
    test3.writedata();


}


