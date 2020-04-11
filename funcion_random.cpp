#include <iostream>
//#include 'TROOT.h'
//#include 'T.TH1F'
using namespace std;

int raan()
{
    return rand() % 101;
}

//Implementación de ROOT C++
TH1F f4("f4","example histogram",100,0,100);