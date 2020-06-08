#include "Woda.hh"

 bool Woda::czy_kolizja(shared_ptr<InterfejsDrona> D){


if(D->getsrodek()[2]>PozycjaSr[2]){

return true;
}
return false;

 }