#ifndef PrzeszkodaProstopadloscian_HH
#define PrzeszkodaProstopadloscian_HH
#include "Przeszkoda.hh"
#include "Prostopadloscian.hh"
#include "Dr3D_gnuplot_api.hh"



class PrzeszkodaProstopadloscian : public Prostopadloscian, public Przeszkoda{

public:


PrzeszkodaProstopadloscian(double a,double b, double c) : Prostopadloscian(a,b,c){}

 bool czy_kolizja(shared_ptr<InterfejsDrona> D) override;

};

#endif