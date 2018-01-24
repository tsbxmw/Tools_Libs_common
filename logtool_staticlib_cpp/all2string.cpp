#include "all2string.h"


string All2String::Int2String(int value)
{
    stringstream ss;
    string str;
    ss << value;
    ss >> str;
    return str;
}

string All2String::Float2String(float value)
{
    stringstream ss;
    string str;
    ss << value;
    ss >> str;
    return str;
}

string All2String::Double2String(double value)
{
    stringstream ss;
    string str;
    ss << value;
    ss >> str;
    return str;
}

