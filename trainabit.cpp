#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

class banca {
private:
    string detinator;
    double balanta;

public:
    banca(string d, double a) {
        cout<<"Cine este detinatorul cardului?\n";
        cin>>d;
        cout<<"Depozitul initial:\n";
        cin>>a;
        detinator = d;
        balanta = a;
    }
    void deposit(double a);
    void withdrawal(double a);
    void display();
};
    void banca::deposit(double a) {
        balanta+=a;
    }
    void banca::withdrawal(double a) {
        balanta-=a;
    }
    void banca::display() {
        cout <<"\n***************************" << endl << detinator << endl << balanta << endl << "***************************\n";
    }

int main() {
    string d;
    double a;
    banca cont1(d,a);
    int ok = 1;
        while(ok!=3) {
            cont1.display();
            cout << "Tasteaza numarul din dreptul optiunii\n 1.Deposit\n 2.Withdrawl\n 3.Exit\n";
            cin>> ok;
            if (ok == 1) {
                cout<< "Suma pe care vrei sa o depozitezi\n";
                cin>>a;
                cont1.deposit(a);
            }
            if (ok == 2) {
                cout<< "Suma pe care vrei sa o retragi\n";
                cin>>a;
                cont1.withdrawal(a);
            }
            if (ok != 3||ok!=2||ok!=1) {cout << "Reincearca\n";}
        }

    return 0;
}
