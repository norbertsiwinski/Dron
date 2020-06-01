#include "Prostopadloscian.hh"
#include <iostream>
#include "Obiekt3D.hh"




Prostopadloscian::Prostopadloscian(double _x, double _y, double _z){

 x=_x;
 y=_y;
 z=_z;


}

void Prostopadloscian::wspolrzedne_gl(Wektor3D tab[])const {


Wektor3D SrodekPr(x/2,y/2,z/2);

Wektor3D X(x,0,0);
Wektor3D Y(0,y,0);
Wektor3D Z(0,0,z);

/*
Wektor3D XX=Orientacja*X;
Wektor3D YY=Orientacja*Y;
Wektor3D ZZ=Orientacja*Z; */

tab[0]= PozycjaSr+Orientacja*SrodekPr; 
tab[1]= PozycjaSr+Orientacja*SrodekPr-Orientacja*X;
tab[2]= PozycjaSr+Orientacja*SrodekPr-Orientacja*X-Orientacja*Y;
tab[3]= PozycjaSr+Orientacja*SrodekPr-Orientacja*Y;
tab[4]= PozycjaSr+Orientacja*SrodekPr-Orientacja*Z;
tab[5]= PozycjaSr+Orientacja*SrodekPr-Orientacja*X-Orientacja*Z;
tab[6]= PozycjaSr+Orientacja*SrodekPr-Orientacja*Y-Orientacja*Z-Orientacja*X;
tab[7]= PozycjaSr+Orientacja*SrodekPr-Orientacja*Y-Orientacja*Z;


}




void Prostopadloscian::rysuj(){

if(id!=-1)
api->erase_shape(id);

    Wektor3D punkt[8];
    (*this).wspolrzedne_gl(punkt);


id=api->draw_polyhedron (vector<vector<Point3D>>{{
    drawNS::Point3D(punkt[0][0],punkt[0][1],punkt[0][2]), drawNS::Point3D(punkt[1][0],punkt[1][1],punkt[1][2]),drawNS::Point3D(punkt[2][0],punkt[2][1],punkt[2][2]),drawNS::Point3D(punkt[3][0],punkt[3][1],punkt[3][2])},
    {

        drawNS::Point3D(punkt[4][0],punkt[4][1],punkt[4][2]), drawNS::Point3D(punkt[5][0],punkt[5][1],punkt[5][2]),drawNS::Point3D(punkt[6][0],punkt[6][1],punkt[6][2]),drawNS::Point3D(punkt[7][0],punkt[7][1],punkt[7][2])
    }},"red");

}
/*
 int Prostopadloscian::zmaz() {

api->erase_shape(id);

return id;

 }
*/
void Prostopadloscian::pozycja(const Wektor3D &W){

PozycjaSr=W;

}

void Prostopadloscian::orientacja(const MacierzOb &M){

Orientacja=M;

}


