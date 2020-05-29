#ifndef PLASZCZYZNA_HH
#define PLASZCZYZNA_HH

#include "Obiekt3D.hh"


class Plaszczyzna: public Obiekt3D{

public:

string kolor; 

Plaszczyzna(){};
void rysuj() override;

};

#endif