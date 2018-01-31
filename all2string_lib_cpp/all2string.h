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

    template <class T> inline
    string all2string(T t);

    template <class T1, class T2>
    string all2string(T1 t1, T2 t2);
    

};


template <class T> inline
string All2String::all2string(T t)
{
    stringstream ss;
    string str;
    ss << t;
    ss >> str;
    return str;
}

template <class T1, class T2> 
string All2String::all2string(T1 t1, T2 t2)
{
    return all2string(t1) + " " + all2string(t2 );
}