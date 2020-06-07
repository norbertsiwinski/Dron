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
#include "InterfejsDrona.hh"
#include "PrzeszkodaProstopadloscian.hh"

using std::vector;
using drawNS::Point3D;
using drawNS::APIGnuPlot3D;
using std::cout;
using std::endl;
using std::shared_ptr;

void wait4key() {
  do {
    std::cout << "\n Press a key to continue..." << std::endl;
  } while(std::cin.get() != '\n');
}
 
int main() {

std::shared_ptr<drawNS::Draw3DAPI> api(new APIGnuPlot3D(-100,100,-100,100,-100,100,100));
api->change_ref_time_ms(0);

std::vector<std::shared_ptr<InterfejsDrona>> KolekcjaDronow;
std::vector<std::shared_ptr<Przeszkoda>> KolekcjaPrzeszkod;

std::shared_ptr<Dno> Dn= std::make_shared<Dno>();
Dn->setapi(api);
Dn->rysuj();

std::shared_ptr<Woda> W= std::make_shared<Woda>();
W->setapi(api);
W->rysuj();

std::shared_ptr<Dron> D1= std::make_shared<Dron>(22,15,10);
Wektor3D W1(50,20,40); 
D1->pozycja(W1);
D1->setapi(api);
D1->rysujdrona();

std::shared_ptr<Dron> D= std::make_shared<Dron>(32,25,17);
D->setapi(api);
D->rysujdrona();


std::shared_ptr<PrzeszkodaProstopadloscian> P1= std::make_shared<PrzeszkodaProstopadloscian>(32,20,80);
Wektor3D W2(-50,-80,-60); 
P1->pozycja(W2);
P1->setapi(api);
P1->rysuj();

KolekcjaDronow.push_back(D1);
KolekcjaDronow.push_back(D);
KolekcjaPrzeszkod.push_back(P1);
KolekcjaPrzeszkod.push_back(Dn);
KolekcjaPrzeszkod.push_back(W);


int i=0;
int dlugosc, kat;

while(i!=3){

cout<<"Menu uzytkownika, wybierz opcje:"<<endl;
cout<<"1. Zadaj ruch na wprost"<<endl;
cout<<"2. Obroc o kat"<<endl;
cout<<"3. Zakoncz dzialanie programu"<<endl;
cout<<"4. wybierz drona:"<<endl;
cout<<"Wybieram:";
cin>>i;
cout<<endl;
switch(i){

case 1:
{
cout<<"Podaj na jaka dlugosc chcesz poplynac:";
cin>>dlugosc;
cout<<"Podaj kat pod jakim chcesz poplynac:";
cin>>kat;
cout<<endl;

bool flag=false;

for(int j=0; j<=dlugosc; j++){

for(auto elem: KolekcjaPrzeszkod){

flag=elem->czy_kolizja(D);

if(flag==true){

 break;
  }

}
if(flag==false){

D->ani_plyn(1,kat);
}

else {
  cout<<"Wykryto mozliwosc kolizji!"; 
  cin.clear();
  cin.ignore(1000,'\n');
  break;
}

}
break;
}

case 2:
{
cout<<"Podaj kat o jaki chcesz obrocic drona:";
cin>>kat;
D->ani_obroc_Z(kat);
cout<<endl;
break;
}
case 3:
{
 exit(1);
  break;
}
case 4:
{

D=D1;

}

default:
cout<<"Niepoprawna opcja, wybierz ponownie"<<endl;
cout<<endl;
break;

}
}


}









