#include "Plaszczyzna.hh"



void Plaszczyzna::rysuj(){

Wektor3D tab[25];

// Wektor3D tab=PozycjaSr;

api->draw_surface(vector<vector<Point3D> > {{
   drawNS::Point3D(tab[0][0],tab[0][1],tab[0][2]), drawNS::Point3D(tab[1][0],tab[1][1],tab[1][2]), drawNS::Point3D(tab[2][0],tab[2][1],tab[2][2]), drawNS::Point3D(tab[3][0],tab[3][1],tab[3][2]),
    drawNS::Point3D(tab[4][0],tab[4][1],tab[4][2]), drawNS::Point3D(tab[5][0],tab[5][1],tab[5][2]), drawNS::Point3D(tab[6][0],tab[6][1],tab[6][2])
      },{
   drawNS::Point3D(tab[7][0],tab[7][1],tab[7][2]), drawNS::Point3D(tab[8][0],tab[8][1],tab[8][2]), drawNS::Point3D(tab[9][0],tab[9][1],tab[9][2]), drawNS::Point3D(tab[10][0],tab[10][1],tab[10][2]),
    drawNS::Point3D(tab[11][0],tab[11][1],tab[11][2]), drawNS::Point3D(tab[12][0],tab[12][1],tab[12][2]), drawNS::Point3D(tab[13][0],tab[13][1],tab[13][2])
      },{
   drawNS::Point3D(tab[14][0],tab[14][1],tab[14][2]), drawNS::Point3D(tab[15][0],tab[15][1],tab[15][2]), drawNS::Point3D(tab[16][0],tab[16][1],tab[16][2]), drawNS::Point3D(tab[17][0],tab[17][1],tab[17][2]),
    drawNS::Point3D(tab[18][0],tab[18][1],tab[18][2]), drawNS::Point3D(tab[19][0],tab[19][1],tab[19][2]), drawNS::Point3D(tab[20][0],tab[20][1],tab[20][2])
      },{

}},"black");

}
