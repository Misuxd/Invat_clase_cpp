#include "pb8implementare.h"
#include "pb8implementare.cpp"


int main() {
    Magazie mag("it&C");
    Material vm[]={Material("mouse",23,15.23),Material("tastatura",42,39.22)};
    for (auto el : vm) mag << el;
    cout << mag;
    return 0;
}
