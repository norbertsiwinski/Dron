#include "Woda.hh"

 bool Woda::czy_kolizja(shared_ptr<InterfejsDrona> D){


if(D->getsrodek()[2]+20>PozycjaSr[2]){

cout<<"MOZLIWA KOLIZJA"<<endl;
return true;
}
return false;

 }