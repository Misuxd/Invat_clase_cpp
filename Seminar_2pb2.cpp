#include <cstring>
#include <memory>
#include <vector>
#include <iostream>
#include <utility>
using namespace std;

//codul materialulu,denumirea , unit masura , pret unitar

class Material {

private:
    float pretbuc;
    int cod, cantitate;
    char nume[30],UnitMasura[4];

public:
    Material() {
        cout<<"Introdu codul produsului:\n";
        cin>>cod;
        cout<<"Introdu numele materialului:\n";
        cin>>nume;
        cout<<"Introdu pretul/buc:\n";
        cin>>pretbuc;
        cout<<"Introdu cantitatea:\n";
        cin>>cantitate;
        cout<<"Introdu unit masura:\n";
        cin>>UnitMasura;
    }

};

int main () {

    Material mat();

    return 0;
}