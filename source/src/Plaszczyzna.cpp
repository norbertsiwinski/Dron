#include "Plaszczyzna.hh"


void Plaszczyzna::rysuj(){


Wektor3D tab=PozycjaSr;


// Wektor3D tab=tabycjaSr;

api->draw_surface(vector<vector<Point3D>> {{
 drawNS::Point3D(tab[0]-100, tab[1]-100, tab[2]),
  
    drawNS::Point3D(tab[0]-40, tab[1]-100, tab[2]),
   
    drawNS::Point3D(tab[0]+40, tab[1]-100, tab[2]),
  
    drawNS::Point3D(tab[0]+100, tab[1]-100, tab[2])
    },{
    drawNS::Point3D(tab[0]-100, tab[1]+100, tab[2]),

    drawNS::Point3D(tab[0]-40, tab[1]+100, tab[2]),
  
    drawNS::Point3D(tab[0]+40, tab[1]+100, tab[2]),
  
    drawNS::Point3D(tab[0]+100, tab[1]+100, tab[2])  

}}, kolor);

}
