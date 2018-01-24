#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <time.h> 
#include <sstream>
using namespace std;

class All2String {
public:
    // all to string functions
    string Int2String(int value);
    string Float2String(float value);
    string Double2String(double value);
    template <class T>
    string all2string(T t);
};


template <class T>
string All2String::all2string(T t)
{
    stringstream ss;
    string str;
    ss << t;
    ss >> str;
    return str;
}