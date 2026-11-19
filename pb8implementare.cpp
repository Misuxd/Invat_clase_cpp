#include "pb8implementare.h"


string Material::get_den() {
    return den;
}

Material::Material(string fden, int fcant, float fpu) { //in implementare nu mai pun valorile implicite ca le am in blueprint// header
}
void Material::set_den(string nd) {
    den=nd;
}
float Material::get_pu() {
    return pu;
}
ostream& operator<<(ostream& os, Material& m) {
    os<<setw(35)<<setiosflags(ios::left)<<m.den<<resetiosflags(ios::left)<<setw(6)<<m.cant<<setw(6)<<setiosflags(ios::fixed)<<setprecision(2)<<m.pu;
    return os;
}

Magazie &Magazie::operator<<(Material &fobm) {
    vm[nrm++] = fobm;
    return *this;
}
ostream& operator<<(ostream& os, Magazie &m) {
    os<<"Magazia: "<<m.nmag<<endl;
    for (int i=0;i<m.nrm;i++) {
        os<<m.vm[i];
    }
    return os;
}
