#include "log.h"

#include <iostream>

using namespace std;

int main()
{
    LogShow ls;
    cout << ls.all2string.all2string(1)<<endl;	
    cout << ls.timeshow("hello") << endl;
    return 0;
}
