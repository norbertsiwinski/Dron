#include "Wektor.hh"
#include <math.h>



  template < class TYP, int Rozmiar>
  TYP & Wektor<TYP,Rozmiar>::operator[](int index)
  {

    if(index <0 || index >=Rozmiar){
      cerr << "Poza zakresem" <<endl;
      exit(1);
    }
   
   return tab[index];
  }

  template<class TYP, int Rozmiar>
const TYP & Wektor<TYP,Rozmiar>::operator[](int index) const{
   if(index <0 || index >=Rozmiar){
      cerr << "Poza zakresem" <<endl;
      exit(1);
    }
   
   return tab[index];

}


 template<class TYP, int Rozmiar>
  Wektor<TYP, Rozmiar> Wektor<TYP,Rozmiar>::operator+(const Wektor<TYP,Rozmiar> & W2)const{

 Wektor<TYP,Rozmiar> W1;
for(int i=0; i<Rozmiar; i++)
W1[i]= tab[i]+W2[i];

return W1;
 }



template<class TYP, int Rozmiar>
 Wektor<TYP, Rozmiar> Wektor<TYP,Rozmiar>::operator-(const Wektor<TYP,Rozmiar> & W2) const{

 Wektor<TYP,Rozmiar> W1;
for(int i=0; i<Rozmiar; i++)
W1[i]= tab[i]-W2[i];

return W1;
 } 

/*
template<class TYP, int Rozmiar>
TYP Wektor<TYP,Rozmiar>::operator*(const Wektor<TYP, Rozmiar> & W2) const{

TYP Wynik;
Wynik=0;

  for(int i=0; i<Rozmiar; i++)
  Wynik=Wynik+tab[i]*W2[i];

  return Wynik;
}
*/

template<class TYP, int Rozmiar>
 Wektor<TYP,Rozmiar> Wektor<TYP,Rozmiar>::operator*(TYP l2)const{

Wektor<TYP,Rozmiar> W1;

for(int i=0; i<Rozmiar;i++)
W1[i]=tab[i]*l2;

return W1;


  }

template<class TYP, int Rozmiar>
Wektor<TYP,Rozmiar> Wektor<TYP,Rozmiar>::operator/ (TYP l2) const  // Operacja dzielenia wektora przez liczbe
{
Wektor<TYP,Rozmiar> Wynik;
int i;
if(l2==0)
{
cerr<< "Dzielenie przez 0!";
exit(1);
}
else
{
for(i=0;i<Rozmiar;i++)
{
    {   
Wynik[i]=tab[i]/l2;
    }
}
 }
return Wynik;
}

/*
template<class TYP, int Rozmiar>
Wektor<TYP,Rozmiar> operator*(TYP l1, const Wektor<TYP, Rozmiar> & W2) {

Wektor<TYP,Rozmiar> W1;

for(int i=0; i<Rozmiar;i++)
W1[i]=l1*W2[i];

return W1;


}
*/

template<class TYP, int Rozmiar>
TYP Wektor<TYP,Rozmiar>::operator* (const Wektor<TYP,Rozmiar> & W2) const // Operacja mnozenia wektorow
{
TYP Wynik;
Wynik=0;
int i;
for(i=0;i<Rozmiar;i++)
{
Wynik=Wynik+tab[i]*W2[i];
} 
return Wynik;
}



template<class TYP, int Rozmiar>  
bool Wektor<TYP,Rozmiar>::operator==(const Wektor<TYP, Rozmiar> & W2)const{

double epsilon=0.00001;

for(int i=0; i<Rozmiar;i++){
if(abs(tab[i]-W2[i]) > epsilon)

return false;

}
  return true;
}
/*
template<class TYP, int Rozmiar>
 double Wektor<TYP, int Rozmiar>::dlugosc()const {

  double dlug=0;
  for(int i=0; i<Rozmiar;i++)
  dlug=(dlug + tab[i]*tab[i]);
  dlug=sqrt(dlug);

  return dlug;
 }
*/

template<class TYP, int Rozmiar>
bool Wektor<TYP,Rozmiar>::operator!=(const Wektor<TYP,Rozmiar> & W2)const{

if(*this==W2)
return false;
else
{
  return true;
}

}


template<class TYP, int Rozmiar>
std::istream & operator >> (std::istream &Strm, Wektor<TYP, Rozmiar> &Wek){

for(int i=0; i<Rozmiar;i++)
Strm>>Wek[i];

return Strm;
}


template<class TYP, int Rozmiar>
std::ostream & operator << (std::ostream &strm, const Wektor<TYP, Rozmiar> &W){

strm<<"|";
  for(int i=0; i<Rozmiar;i++)
strm<<W[i]<<" ";

strm<<"|";
cout<<endl;


return strm;

 }

template<class TYP, int Rozmiar>
double Wektor<TYP,Rozmiar>::dlugosc(){

double dlug=0;

for(int i=0; i<Rozmiar;i++)
dlug=(dlug+tab[i]*tab[i]);
dlug=sqrt(dlug);

return dlug;
 }
/*
 template <> bool Wektor<LZespolona,5>::operator==(const Wektor<LZespolona,5> &W2)const{

Wektor<LZespolona,5> Wynik;
double epsilon=0.000001;

for(int i=0; i<5; i++)
if(abs(tab[i].Modul()-W2[i].Modul()) > epsilon )
return false;

return true;



 }


 */

