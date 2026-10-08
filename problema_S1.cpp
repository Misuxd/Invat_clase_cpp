#include <cstring>
#include <iostream>
#include <utility>
using namespace std;

// sa se sorteze un nr de max 50 siruri fiecare sir avand max 20 char
// vreau sa arat ambele siruri dar fara sa memorez sirurile de 2 ori


int main() {
    char a[50][21], *v[50];
    int nr;
    bool swapp;
    cout << "dati nr de siruri:\n";
    cin >> nr;

    for (int i = 0; i < nr; i++) {
        cout << "sirul " << i+1 << ": ";
        cin >> a[i];
        v[i]=a[i];
        cout << endl;
    }

    for (int i = 0; i < nr-1; i++) {
        swapp = false;
        for (int j = 0; j < nr-i-1; j++) {
            if (strcmp(v[j], v[j+1])>0) {
                swapp = true;
                swap(v[j], v[j+1]);
            }
        }
        if (!swapp) {
             break;
        }
    }


    for (int i = 0; i < nr; i++) {
        cout << v[i] << endl;
    }

    return 0;
}
