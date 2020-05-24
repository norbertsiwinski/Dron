#include <iostream>
#include <vector>
#include "Dr3D_gnuplot_api.hh"
#include "MacierzOb.hh" 
#include "Wektor.hh"
#include "Macierz.hh"
#include "Prostopadloscian.hh"
#include "Dron.hh"
#include "Dno.hh"
#include "Woda.hh"
#include "Plaszczyzna.hh"




using std::vector;
using drawNS::Point3D;
using drawNS::APIGnuPlot3D;
using std::cout;
using std::endl;

void wait4key() {
  do {
    std::cout << "\n Press a key to continue..." << std::endl;
  } while(std::cin.get() != '\n');
}

int main() {


 std::shared_ptr<drawNS::Draw3DAPI> api(new APIGnuPlot3D(-100,100,-100,100,-100,100,100));
 
api->change_ref_time_ms(0);
Dron D(27,20,15);

Wektor3D W(40,0,45);
/*
Dno Dt;
Dt.rysuj();
*/


D.setapi(api);

D.rysujdrona();
wait4key();
// D.ani_plyn(W);
wait4key();

wait4key();
D.ani_plyn(W);
wait4key();
D.ani_obroc_Z(50);


wait4key();






/*

int i=0;
int kat;
int odlegosc;
while(i!=3){

cout<<" Menu: "<<endl;
cout<<"1 - zadaj ruch na wprost"<<endl;
cout<<"2 - zadaj zmiane orientacji"<<endl;
cout <<"3 - zakoncz dzialanie"<<endl;

cin>>i;

if(i==1)

cout<<"Podaj kat";
cin >> kat;
cout<<"Podaj odlegosc";
cin >> odlegosc;
D.ani_plyn(kat,odlegosc);
wait4key();
}
if(i==2){

cout<<"Podaj kat";
cin >> kat;
D.ani_obroc_Z(kat);
wait4key();
}
if(i==3){

exit(1);
}

*/
}









