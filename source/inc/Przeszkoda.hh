#ifndef Przeszkoda_HH
#define Przeszkoda_HH

#include "Dr3D_gnuplot_api.hh"
#include "InterfejsDrona.hh"
#include "MacierzOb.hh"
#include "Wektor.hh"

class InterfejsDrona;

class Przeszkoda{
    
public:


virtual bool czy_kolizja(std::shared_ptr<InterfejsDrona> D)=0; 

};

#endif