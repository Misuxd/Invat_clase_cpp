#include <iostream>
using namespace std;

class ProdusG
{
protected:
	string den;
	float cm;
	int cs, p;
	virtual void afis(ostream& os) {
		os << den << " " << cm << " " << cs << " " << p;
	}
	virtual float calc_pret() { return cm + cs + p; }//virtualizare:metodei i se asociaza tabela de metoda virtuala (un vector de pointeri) el vede de unde provine obiectul, dintr un obiect de baza sau derivat
public:
	ProdusG(string fden = "Anonim", float fcm = 0, int fcs = 0, int fp = 0) : den(fden), cm(fcm), cs(fcs), p(fp) {}

	float get_pret() { return calc_pret(); }

	string get_denum() { return den; }

	friend ostream& operator<<(ostream& os, ProdusG& pr) {
		pr.afis(os);
		cout << endl;
		return os;
	}
};

class ProdusD :public ProdusG
{
	int ac;
	void afis(ostream& os) { ProdusG::afis(os); os << " " << ac; }
	float calc_pret() { return ProdusG::calc_pret() + ac; }
public:
	ProdusD(string fden = "Anonim", float fcm = 0, int fcs = 0, int fp = 0, int fac = 0) : ProdusG(fden, fcm, fcs, fp), ac(fac) {}
	ProdusD(const ProdusG& pb, int fac) : ProdusG(pb), ac(fac){}
};

int main() {
	ProdusG p1("pantaloni", 2.5, 5, 8), * p;
	ProdusD p2("sacou", 2.5, 5, 8, 10);
	p = &p1;
	cout << "produsul 1: " << p->get_denum() << " are pretul: " << p->get_pret() << endl;
	p = &p2;
	cout << "produsul 2: " << p->get_denum() << " are pretul: " << p->get_pret() << endl;
	cout << endl;
	cout << p1 << p2;
	ProdusD p3(p1, 15);
	return 0;
}