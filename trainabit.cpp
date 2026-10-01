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
    friend void transfer(double a, banca &c1 , banca &c2);


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
    void transfer(double a, banca &c1 , banca &c2) {
        c2.balanta+=a;
        c1.balanta-=a;
    }

int main() {
        int ok;
    string d;
    double a;
    banca cont1(d,a);
        banca cont2(d,a);
    while (true) {
        cont1.display();
        cout << "Alege una din variantele urmatoare:\n 1.Deposit\n 2.Withdrawl\n 3.Transfer\n 4.EXIT\n";
        cin >> ok;
        if (ok == 4) break;
        switch (ok) {
            case 1:
                cout << "introdu suma pe care vrei sa o depozitezi: \n";
                cin >> a;
                cont1.deposit(a);
                break;
            case 2:
                cout<<"introdu suma pe care vrei sa o scoti: \n";
                cin >> a;
                cont1.withdrawal(a);
                break;
            case 3:
                cout<<"suma pe care vrei sa o transferi\n";
                cin>>a;
                transfer(a,cont1,cont2);
                break;

        }

    }

    return 0;
}

// sa se sorteze un nr de max 50 siruri fiecare sir avand max 20 char
// vreau sa arat ambele siruri dar fara sa memorez sirurile de 2 ori
