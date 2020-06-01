#include "Graniastoslup.hh"

Graniastoslup::Graniastoslup(double A, double H){

a=A;
h=H;

}



void Graniastoslup::wspolrzedne_gl(Wektor3D tab[]) const {



Wektor3D srodek_gran(a/2,a/2,h/2);

Wektor3D przesuniecie_y2(0,a/2,0);

Wektor3D przesuniecie_x(h,0,0);

Wektor3D przesuniecie_x2(h/2,0,0);

Wektor3D przesuniecie_y(0,a,0);

Wektor3D przesuniecie_z(0,0,a*sqrt(3)/2);


Wektor3D OrY2= Orientacja*przesuniecie_y2;
Wektor3D OrX=Orientacja*przesuniecie_x;
Wektor3D OrY=Orientacja*przesuniecie_y;
Wektor3D OrZ=Orientacja*przesuniecie_z;
Wektor3D OrX2=Orientacja*przesuniecie_x2;

tab[0] = PozycjaSr+ Orientacja *srodek_gran-OrX-OrX2-OrZ;
tab[1] = PozycjaSr + Orientacja * srodek_gran + OrY2 -OrX-OrX2;
tab[2] = PozycjaSr + Orientacja *srodek_gran + OrY +OrY2 -OrX-OrX2;
tab[3] = PozycjaSr + Orientacja *srodek_gran + OrY + OrY-OrX-OrX2-OrZ;
tab[4] = PozycjaSr + Orientacja * srodek_gran + OrY+OrY2 -OrX-OrX2-OrZ-OrZ;
tab[5] = PozycjaSr + Orientacja *srodek_gran +OrY2 -OrX-OrX2-OrZ -OrZ;
tab[6] = PozycjaSr + Orientacja *srodek_gran - OrX -OrX-OrX2-OrZ;
tab[7] = PozycjaSr + Orientacja *srodek_gran + OrY2 - OrX-OrX-OrX2;
tab[8] = PozycjaSr + Orientacja *srodek_gran  + OrY +OrY2 -OrX-OrX-OrX2;
tab[9] = PozycjaSr + Orientacja *srodek_gran + OrY + OrY -OrX-OrX-OrX2-OrZ;
tab[10] = PozycjaSr + Orientacja *srodek_gran + OrY + OrY2 -OrX-OrX-OrX2-OrZ-OrZ;
tab[11] = PozycjaSr + Orientacja *srodek_gran + OrY2 -OrX-OrX-OrX2-OrZ-OrZ;

}

void Graniastoslup::rysuj() 
{
 Wektor3D tab[12];
(*this).wspolrzedne_gl(tab);
if (id != -1)
    api->erase_shape(id);
id = api->draw_polyhedron(vector<vector<Point3D> > {{
 drawNS::Point3D(tab[0][0],tab[0][1],tab[0][2]), drawNS::Point3D(tab[1][0],tab[1][1],tab[1][2]), drawNS::Point3D(tab[2][0],tab[2][1],tab[2][2]),
       drawNS::Point3D(tab[3][0],tab[3][1],tab[3][2]), drawNS::Point3D(tab[4][0],tab[4][1],tab[4][2]), drawNS::Point3D(tab[5][0],tab[5][1],tab[5][2])
      },{
       drawNS::Point3D(tab[6][0],tab[6][1],tab[6][2]), drawNS::Point3D(tab[7][0],tab[7][1],tab[7][2]), drawNS::Point3D(tab[8][0],tab[8][1],tab[8][2]),
    drawNS::Point3D(tab[9][0],tab[9][1],tab[9][2]), drawNS::Point3D(tab[10][0],tab[10][1],tab[10][2]), drawNS::Point3D(tab[11][0],tab[11][1],tab[11][2])
	  }},"purple");
    

}

void Graniastoslup::getwym(double A,double H){

a=A;
h=H;

}

/*
void Graniastoslup::pozycja(const Wektor3D &W){

PozycjaSr=W;

}
*/

