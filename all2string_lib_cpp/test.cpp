#include <iostream>

#include "all2string.h"

using namespace std;

int main()
{
    All2String a2s;
    cout << a2s.all2string(5) << endl;
    cout << a2s.all2string(5,10) << endl;
    cout << a2s.all2string(100.00) << endl;
    cout << a2s.all2string(000.00) << endl;
    cout << All2String::Int2String(222) << endl;
    cout << All2String::Float2String(100.00) << endl;
    cout << All2String::Double2String(100.00000) << endl;
    return 0;
}
