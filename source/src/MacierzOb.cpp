#include "MacierzOb.hh"
#include "Macierz.hh"
#include <cmath>
using namespace std;
#define Pi 3.14



MacierzOb::MacierzOb() 
        {
tab[0][0]=1;       
tab[1][1]=1; 
tab[2][2]=1; 
       }

MacierzOb::MacierzOb(double kat, char os)
{  


kat=kat*Pi/180;

tab[0][0]=1;       
tab[1][1]=1; 
tab[2][2]=1;

switch (os)
 {
case 'x':
  {
tab[1][1]=cos(kat);
tab[2][2]=cos(kat);
tab[2][1]=sin(kat);
tab[1][2]=-sin(kat);
break;
    }
case 'y':
{
tab[0][0]=cos(kat);
tab[2][2]=cos(kat);
tab[0][2]=sin(kat);
tab[2][0]=-sin(kat);
break;
 }
case 'z':
 {
tab[0][0]=cos(kat);
tab[1][1]=cos(kat);
tab[0][1]=-sin(kat);
tab[1][0]=sin(kat);
break;
 }
    }
}
