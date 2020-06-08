#include "Dno.hh"

 bool Dno::czy_kolizja(shared_ptr<InterfejsDrona> D) {
     
double z=D->getwys();

if(D->getsrodek()[2]-z/2<PozycjaSr[2]){
 
return true;
}
else
return false;
     
 }