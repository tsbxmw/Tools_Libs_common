#include "log.h"

#include <iostream>

using namespace std;

int main()
{
    LogShow ls;
    // test all2string int,float,double,short
    cout << "test int    2 string : " << ls.all2string.all2string(1) << endl;
    cout << "test float  2 string : " << ls.all2string.all2string(1.5) << endl;
    cout << "test double 2 string : " << ls.all2string.all2string(1.5) << endl;
    cout << "test short  2 string : " << ls.all2string.all2string(1) << endl;
    // test timeshow function
    cout << ls.timeshow("hello") << endl;
    // test logshow function
    cout << ls.logshow("test", 5, "test strings here");
    return 0;
}
