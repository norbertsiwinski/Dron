#include "Macierz.hh"


template<class TYP, int Rozmiar>
Wektor<TYP,Rozmiar> & Macierz<TYP,Rozmiar>::operator[](int index){

if(index <0 || index >=Rozmiar){
      cerr << "Poza zakresem" <<endl;
      exit(1);
    }
   
   return tab[index];

}
template<class TYP, int Rozmiar>
const Wektor<TYP,Rozmiar> & Macierz<TYP,Rozmiar>::operator[](int index)const{
if(index <0 || index >=Rozmiar){
      cerr << "Poza zakresem" <<endl;
      exit(1);
    }
   
   return tab[index];

}

template<class TYP, int Rozmiar>
Macierz<TYP,Rozmiar> Macierz<TYP,Rozmiar>::operator *(TYP B) const // operator mnozenia Macierz<Typ,SWymiar>y przez liczbe
{
Macierz<TYP,Rozmiar> mac;
int i;
for(i=0;i<Rozmiar;i++)
{
mac[i]=tab[i]*B;
}
return mac;
}


template<class TYP, int Rozmiar>
Macierz<TYP,Rozmiar>::Macierz(){

  Wektor<TYP,Rozmiar> X;
for(int i=0; i<Rozmiar;i++)
  tab[i]=X;
}

 template<class TYP, int Rozmiar>
 Wektor<TYP,Rozmiar>  Macierz<TYP,Rozmiar>::operator *(const Wektor<TYP,Rozmiar> & B)const{

Wektor<TYP,Rozmiar> B1;

for(int i=0; i<Rozmiar;i++)

B1[i]=tab[i]*B;

return B1;

}
 template<class TYP, int Rozmiar>
 Macierz<TYP,Rozmiar> Macierz<TYP,Rozmiar>::operator +( Macierz<TYP,Rozmiar> B)const{

Macierz<TYP,Rozmiar> M;


for(int i=0; i<Rozmiar;i++)
M[i]=tab[i]+B[i];

return M;
}
 template<class TYP, int Rozmiar>
 Macierz<TYP,Rozmiar> Macierz<TYP,Rozmiar>::operator -(Macierz<TYP,Rozmiar> B)const{

Macierz<TYP,Rozmiar> M;


for(int i=0; i<Rozmiar;i++)
M[i]=tab[i]-B[i];

return M;
}
 template<class TYP, int Rozmiar>
Macierz<TYP,Rozmiar> Macierz<TYP,Rozmiar>::operator * (Macierz<TYP,Rozmiar>  B)const{
/*
Macierz<TYP,Rozmiar> Wynik;
Macierz<TYP,Rozmiar> M2;
M2=B;

M2.transponuj();

for(int i=0; i<Rozmiar;i++)
for(int j=0; j<Rozmiar;j++)
Wynik[i][j]=tab[i]*M2[j];

return Wynik;
*/
Macierz<TYP,Rozmiar> mac2;
Macierz<TYP,Rozmiar> mac;
int i;
mac2=*this;
mac2=mac2.transponuj();
for(i=0;i<Rozmiar;i++)
     {
mac[i]=mac2*B[i];
     }
return mac;              
}


 template<class TYP, int Rozmiar>
TYP Macierz<TYP,Rozmiar>::wyznacznik_sar ()const{

TYP Wynik;
Wynik=0;

Wynik=tab[0][0]*tab[1][1]*tab[2][2]+tab[1][0]*tab[2][1]*tab[0][2]+tab[2][0]*tab[0][1]*tab[1][2]-tab[0][2]*tab[1][1]*tab[2][0]-tab[1][2]*tab[2][1]*tab[0][0]-tab[2][2]*tab[0][1]*tab[1][0];

return Wynik;

}
template<class TYP, int Rozmiar>
TYP Macierz<TYP,Rozmiar>::wyznacznik_gauss()const{

TYP x;
x=0;

TYP Wynik;
Wynik =1;

Macierz<TYP,Rozmiar> M = (*this);


for(int i=0; i<Rozmiar;++i){
  for(int j=i+1; j<Rozmiar;++j){
     x=M[j][i]/M[i][i];
    
    
      for(int k=0; k<Rozmiar;++k){

       M[j][k]=M[j][k]-x*M[i][k];
      }
   }
}
for(int l=0; l<Rozmiar;l++){
Wynik=M[l][l]*Wynik;
}
return Wynik;

}



 template<class TYP, int Rozmiar>
Macierz<TYP,Rozmiar> Macierz<TYP,Rozmiar>::transponuj()const{

Macierz<TYP,Rozmiar> Trans;

for(int i=0; i<Rozmiar;i++)
for(int j=0; j<Rozmiar;j++)
Trans[j][i]=tab[i][j];

return Trans;

}

 template<class TYP, int Rozmiar>
void Macierz<TYP,Rozmiar>::Transponuj(){

Macierz<TYP,Rozmiar> M;

for(int i=0; i<Rozmiar;i++)
for(int j=0; j<Rozmiar;j++)

M[i][j]=tab[i][j];

for(int i=0; i<Rozmiar;i++)
for(int j=0; j<Rozmiar;j++)

tab[j][i]=M[i][j];


}


 template<class TYP, int Rozmiar>
std::ostream & operator << (std::ostream &Strm, const Macierz<TYP,Rozmiar> &Mac){

for(int i=0; i<Rozmiar;i++)
Strm<<Mac[i];
return Strm;
}

 template<class TYP, int Rozmiar>
std::istream& operator >> (std::istream &Strm, Macierz<TYP,Rozmiar> &Mac){

for(int i=0; i<Rozmiar;i++)
Strm>>Mac[i];

return Strm;

}

 template<class TYP, int Rozmiar>
bool Macierz<TYP,Rozmiar>::operator==(const Macierz<TYP,Rozmiar> & M2)const{

double epsilon=0.000001;

for(int i=0; i<Rozmiar;i++){
for(int j=0; j<Rozmiar;j++)
if( abs(tab[i][j]-M2[i][j]) > epsilon)

return false;

}
return true;
}
 template<class TYP, int Rozmiar>
bool Macierz<TYP,Rozmiar>::operator !=(const Macierz<TYP,Rozmiar> & M2)const{


if(*this==M2)
return false;

 return true;




}
