#include "Dron.hh"



Dron::Dron(double X, double Y, double Z){


x=X;
y=Y;
z=Z;

Lewy.getwym(X/7,Y/2);
Prawy.getwym(X/7,Y/2);

Wektor3D Przesun_prawo(0,-Y/1.8,0);

Prawy.pozycja(Przesun_prawo);

RuszPrawy = Przesun_prawo; 

}

void Dron::setapi(std::shared_ptr<drawNS::Draw3DAPI> Api ){

Prostopadloscian::setapi(Api);   
Lewy.setapi(Api);
Prawy.setapi(Api);

}



void Dron::obroc_Z(double kat)
     {

MacierzOb Ob(kat,'z');

Orientacja=Orientacja*Ob;


  }

void Dron::ani_obroc_Z(double kat){

if(kat>0){
 
for(int i=0;i<kat;++i){

obroc_Z(1);
rysujdrona();

}
}
if(kat<0){
for(int i=0;i>kat;--i){
obroc_Z(-1);
rysujdrona();

}
}

}



void Dron::plyn(double dlugosc, double kat){

kat=kat*Pi/180;

Wektor3D P;

P[0]=cos(kat);
P[1]=0;
P[2]=sin(kat);

PozycjaSr=PozycjaSr+Orientacja*P*dlugosc;


}

void Dron::ani_plyn(double dlugosc, double kat){

plyn(dlugosc, kat);
rysujdrona();


/*
if(i+1<dlugosc){
api->erase_shape(id);
}
*/
}



void Dron::odswiez_prawy(){


Prawy.pozycja(PozycjaSr+Orientacja*RuszPrawy);
Prawy.orientacja(Orientacja);

}

void Dron::odswiez_lewy(){


Lewy.pozycja(PozycjaSr);
Lewy.orientacja(Orientacja);


}

void Dron::rysujdrona(){

odswiez_prawy();
odswiez_lewy();
Prostopadloscian::rysuj();
Prawy.rysuj();
Lewy.rysuj();

}

bool Dron::czy_kolizja(std::shared_ptr<InterfejsDrona> D){

double promien1= D->getbok()/2;
double promien2= this->getbok()/2;
Wektor3D odl= D->getsrodek()-this->getsrodek();

if(D->getsrodek()==PozycjaSr)
return false;

if(promien1+promien2>odl.dlugosc())
 return true;

else return false;

} 




