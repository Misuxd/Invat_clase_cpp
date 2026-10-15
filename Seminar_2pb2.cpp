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

    float price();
    void afis();
    void set_nume(const char *name){strcpy(nume,name);}
    char *get_nume(){return nume;} // ca sa am un alt vector de nume cu care sa lucrez

};

float Material::price() {
    return pretbuc;
}
void Material::afis() {
    cout<<"**********************************************************\n";
    cout<<"cod: "<< cod<< endl;
    cout <<"nume: "<< nume << endl;
    cout<<"price: "<<pretbuc<<endl;
    cout<<"unitmasura: "<< UnitMasura<<endl;
    cout<<"cantitate: "<< cantitate<<endl;
    cout<<"**********************************************************\n";

}

int main () {
    int c ,  q;
    char name[30], um[4];
    float p;


    Material mat(c,q,name,um,p);
    Material mat2(2,"var","buc",102);
    cout << mat2.price() << endl;
    mat2.afis();


    Material *vm = new Material[]{Material(2,"var","buc",102),Material(c,q,name,um,p)};
    for (i=0;i<3;i++) {
        vm[i].afis();
    }
    // Uita te in ai cum se face
    // am nevoie de fiecare constructor
    return 0;
}

//vect de alocare dinamic care sa construiasca un vect de materiale