#ifndef Granistoslup_hh
#define Graniastoslup_hh
#include "Obiekt3D.hh"
#include "Prostopadloscian.hh"

class Graniastoslup : public Obiekt3D {

public:

double a;
double h;

Graniastoslup(){};
Graniastoslup(double A, double H);

void rysuj() override;

void wspolrzedne_gl(Wektor3D tab[]) const;

void getwym(double a,double h);

};


#endif