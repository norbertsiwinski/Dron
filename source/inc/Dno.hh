#ifndef DNO_HH
#define DNO_HH
 // #include "Przeszkoda.hh"
#include "Plaszczyzna.hh"
#include "Obiekt3D.hh"

class Dno: public Plaszczyzna, public Przeszkoda{

public:

  Dno(){PozycjaSr={0,0,-100}; kolor ="green";}; 
  bool czy_kolizja(shared_ptr<InterfejsDrona> D) override;

};




#endif