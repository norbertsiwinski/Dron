#ifndef WODA_HH
#define WODA_HH

#include "Plaszczyzna.hh"


class Woda : public Plaszczyzna, public Przeszkoda{

public:

Woda(){PozycjaSr={0,0,100}; kolor="blue";};
 bool czy_kolizja(shared_ptr<InterfejsDrona> D) override;

};




#endif