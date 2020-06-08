#ifndef PROSTOPADLOSCIAN_HH
#define PROSTOPADLOSCIAN_HH

#include "Obiekt3D.hh"

class Prostopadloscian: public Obiekt3D{

protected:

double x,y,z;

public:

Prostopadloscian(){};
Prostopadloscian(double _x, double _y, double _z);

 /*int zmaz() override; */
 void rysuj() override;

 void wspolrzedne_gl(Wektor3D tab[]) const;

void pozycja(const Wektor3D &W);
void orientacja(const MacierzOb &M);

};


#endif