#ifndef INTERFEJSDRONA_HH
#define INTERFEJSDRONA_HH
 /* #include "Przeszkoda.hh" */
#include "Dr3D_gnuplot_api.hh"
#include "Przeszkoda.hh"

class InterfejsDrona{

public:


virtual void obroc_X(double kat) = 0; 
virtual void obroc_Z(double kat) = 0;
virtual void obroc_Y(double kat) =0;


virtual void ani_plyn(double dlugosc, double kat) =0;

virtual void ani_obroc_Y(double kat)=0;
virtual void ani_obroc_Z(double kat)=0;
virtual void ani_obroc_X(double kat)=0;
virtual void plyn(double dlugosc, double kat)=0;
virtual void odswiez_prawy()=0;
virtual void odswiez_lewy()=0;
virtual void odswiez()=0;
virtual Wektor3D getsrodek()=0;
};

#endif
