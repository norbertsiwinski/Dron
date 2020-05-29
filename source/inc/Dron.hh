#ifndef DRON_HH
#define DRON_HH

#include "Prostopadloscian.hh"
#include "Graniastoslup.hh"
#include "InterfejsDrona.hh"
#include "unistd.h"




class Dron : public Prostopadloscian, public InterfejsDrona /*,public Graniastoslup */
{

public:

Graniastoslup Lewy;
Graniastoslup Prawy;

Wektor3D RuszPrawy;


Dron(double A, double B, double C);
void obroc_X(double kat) override;
void obroc_Y(double kat) override;
void obroc_Z(double kat) override;
void setapi(std::shared_ptr<drawNS::Draw3DAPI> Api ); 
void ani_plyn(double dlugosc, double kat) override;
void ani_obroc_Y(double kat) override;
void ani_obroc_Z(double kat) override;
void ani_obroc_X(double kat) override;
void rysujdrona();
void plyn1(Wektor3D Wek)override;

void plyn(double dlugosc, double kat)override;
};




#endif