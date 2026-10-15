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
    Material(int c ,int  q ,char name[],char um[],float p) {

        cout<<"Introdu codul produsului:\n";
        cin>>c;
        cout<<"Introdu numele materialului:\n";
        cin>>name;
        cout<<"Introdu pretul/buc:\n";
        cin>>p;
        cout<<"Introdu cantitatea:\n";
        cin>>q;
        cout<<"Introdu unit masura:\n";
        cin>>um;
        cod=c;
        cantitate=q;
        strcpy(nume,name);
        strcpy(UnitMasura,um);
        pretbuc=p;
    }
    Material(int fq, char *fname,char *fum, float fp) : cantitate(fq), pretbuc(fp) {
        strcpy(nume,fname);
        strcpy(UnitMasura,fum);
    }

    float price() {
        return pretbuc;
    }

};


int main () {
    int c ,  q;
    char name[30], um[4];
    float p;
    Material mat(c,q,name,um,p);
    Material mat2(2,"var","buc",102);
    cout << mat2.price() << endl;
    return 0;
}