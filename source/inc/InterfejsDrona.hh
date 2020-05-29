#ifndef INTERFEJSDRONA_HH
#define INTERFEJSDRONA_HH



class InterfejsDrona{

public:
InterfejsDrona(){};

virtual void obroc_X(double kat) = 0; 
virtual void obroc_Z(double kat) = 0;
virtual void obroc_Y(double kat) =0;


virtual void ani_plyn(double dlugosc, double kat) =0;
virtual void plyn1(Wektor3D Wek)=0;
virtual void ani_obroc_Y(double kat)=0;
virtual void ani_obroc_Z(double kat)=0;
virtual void ani_obroc_X(double kat)=0;
virtual void plyn(double dlugosc, double kat)=0;


};

#endif
