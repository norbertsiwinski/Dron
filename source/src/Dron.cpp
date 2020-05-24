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

if(i+1<kat) 
api->erase_shape(id); 
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

Lewy.obracaj_wirL(Obrot);
Prawy.obracaj_wirP(Obrot,RuszPrawy);
  }

void Dron::ani_obroc_Z(double kat){

for(int i=0;i<kat;++i){

obroc_Z(1);
rysujdrona();

}

}


void Dron::plyn1(Wektor3D Wek){

 PozycjaSr = PozycjaSr +Wek;

Lewy.rusz(Wek);
Prawy.rusz(Wek);

}



void Dron::ani_plyn(Wektor3D Wek){


for(int i=0;i<100;i++){

plyn1(Wek/100);
rysujdrona();
/*
if(i+1<dlugosc){
api->erase_shape(id);
}
*/

}

}

void Dron::rysujdrona(){

rysuj();
Lewy.rysuj();
Prawy.rysuj();

}






