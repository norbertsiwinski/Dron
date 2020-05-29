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
void pozycja(const Wektor3D &W);
void getwym(double a,double h);
void obracaj_wirL(MacierzOb Obrot);
void obracaj_wirP(MacierzOb Obrot, Wektor3D W);
void rusz(Wektor3D Wek);

};




#endif