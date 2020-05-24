#ifndef OBIEKT3D_HH
#define OBIEKT3D_HH

#include <iostream>
#include "Wektor.hh"
#include "Dr3D_gnuplot_api.hh"
#include "MacierzOb.hh"
#define Pi 3.14

using std::vector;
using drawNS::Point3D;
using drawNS::APIGnuPlot3D;

class Obiekt3D{

protected:

Wektor3D PozycjaSr;

MacierzOb Orientacja;

std::shared_ptr<drawNS::Draw3DAPI> api;

int id;


public:
virtual int rysuj()= 0;
/* virtual int zmaz() =0; */
void pozycja(const Wektor3D &W);
void orientacja(const MacierzOb &M);
void setapi(std::shared_ptr<drawNS::Draw3DAPI> Api ) {api=Api;} 

};


#endif