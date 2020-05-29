#include "Dron.hh"



Dron::Dron(double X, double Y, double Z){


x=X;
y=Y;
z=Z;

Lewy.getwym(X/8,Y/2);
Prawy.getwym(X/8,Y/2);


Wektor3D Przesun_prawo(0,-Y/1.8,0);

Prawy.pozycja(Przesun_prawo);

RuszPrawy = Przesun_prawo; 

}

void Dron::setapi(std::shared_ptr<drawNS::Draw3DAPI> Api ){

Prostopadloscian::setapi(Api);   
Lewy.setapi(Api);
Prawy.setapi(Api);

}


void Dron::obroc_X(double kat){

MacierzOb Ob(kat,'x');
Orientacja= Orientacja*Ob;


}

void Dron::ani_obroc_X(double kat){


for(int i=0;i<kat;i++){
rysuj();
obroc_X(i);
}

}


void Dron::obroc_Y(double kat){

MacierzOb Ob(kat,'y');

Orientacja = Orientacja*Ob;

}

void Dron::ani_obroc_Y(double kat){


for(int i=0;i<kat;i++){
(*this).obroc_Y(i);
rysuj();
}
}


void Dron::obroc_Z(double kat)
     {
MacierzOb Obrot(kat,'z');
Orientacja=Orientacja*Obrot;

  }

void Dron::ani_obroc_Z(double kat){

for(int i=0;i<kat;++i){

obroc_Z(1);
rysujdrona();
usleep(10000);
}

}


void Dron::plyn1(Wektor3D Wek){

PozycjaSr = PozycjaSr + Wek;

}

void Dron::plyn(double dlugosc, double kat){

kat=kat*Pi/180;
double kat_or=Orientacja.getkat()*Pi/180;

Wektor3D P;
P[0]=cos(kat)*cos(kat_or);
P[1]=cos(kat)*sin(kat_or);
P[2]=sin(kat);

PozycjaSr=PozycjaSr+P*dlugosc;

}

void Dron::ani_plyn(double dlugosc, double kat){

for(int i=0;i<100;i++){
plyn(dlugosc/100, kat);
rysujdrona();
usleep(10000);
/*
if(i+1<dlugosc){
api->erase_shape(id);
}
*/
}

}

void Dron::rysujdrona(){

Prostopadloscian::rysuj();
Lewy.rysuj();
Prawy.rysuj();

}






