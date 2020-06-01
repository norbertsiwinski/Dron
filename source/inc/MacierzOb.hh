#ifndef MACIERZOB_HH
#define MACIERZOB_HH

#include "Macierz.hh"
#include "cmath"

class MacierzOb : public Macierz<double,3> {

public:

double kat;

MacierzOb();

MacierzOb(const Macierz<double,3> &M) : Macierz<double,3>(M){

double epsilon=0.0000001;
for(int i=0;i<1;i++)
    {
if(abs(M[i]*M[i+1]) > epsilon)
exit(1);
    }
    
if(abs(M.wyznacznik_sar()) > 1)

  {
exit(1);
  }
  
}


MacierzOb(double kat, char os);

double getkat(){ return this->kat;};
};




#endif