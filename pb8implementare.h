#pragma once
#include <iostream>
#include <iomanip>

using namespace std;
// #ifndef INVAT_CLASE_CPP_PB8IMPLEMENTARE_H
// #define INVAT_CLASE_CPP_PB8IMPLEMENTARE_H


class Material {
    string den;
    int cant;
    float pu;
    public:
        Material(string fden="no name",int fcant=0,float fpu=0);
        string get_den();
        void set_den(string nd);
        float get_pu();
        friend ostream& operator<<(ostream& os, Material& m);
};
class Magazie {
    Material vm[100];
    int nrm;
    string nmag;
public:
    Magazie(string nm) : nmag(nm),nrm(0) {}
    Magazie& operator<<(Material&);
};


// #endif //INVAT_CLASE_CPP_PB8IMPLEMENTARE_H