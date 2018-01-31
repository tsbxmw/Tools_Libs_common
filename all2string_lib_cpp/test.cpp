#include <iostream>

#include "all2string.h"

using namespace std;

int main()
{
    All2String a2s;
    cout << a2s.all2string(5) << endl;
    cout << a2s.all2string(5,10) << endl;
    return 0;
}