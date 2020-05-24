#ifndef MACIERZ_HH
#define MACIERZ_HH

#include <iostream>
#include "Wektor.hh"


/*
 *  Tutaj trzeba opisac klase. Jakie pojecie modeluje ta klasa
 *  i jakie ma glowne cechy.
 */
template<class TYP,int Rozmiar>
class Macierz {
  
protected:
Wektor<TYP,Rozmiar> tab[Rozmiar];

  public:

/* gettery i cettery */
  Wektor<TYP,Rozmiar> & operator[](int index);
const Wektor<TYP,Rozmiar> & operator[](int index)const;

  
Macierz<TYP,Rozmiar>();
/* Macierz<TYP,Rozmiar>(Wektor<TYP,Rozmiar> A, Wektor<TYP,Rozmiar> B, Wektor<TYP,Rozmiar> C); */

 Wektor<TYP,Rozmiar>  operator *(const Wektor<TYP,Rozmiar> & B)const;
 Macierz<TYP,Rozmiar> operator +( Macierz<TYP,Rozmiar>  B)const;
 Macierz<TYP,Rozmiar> operator -( Macierz<TYP,Rozmiar>  B)const;
 Macierz<TYP,Rozmiar> operator *(Macierz<TYP,Rozmiar> B)const;
 Macierz<TYP,Rozmiar> operator *(TYP B)const;


 Macierz<TYP,Rozmiar> transponuj() const;
void Transponuj();
 /*const Macierz<TYP,Rozmiar> dopelnien(int x, int y)const;
const Macierz<TYP,Rozmiar> odwracaj() const; */


TYP wyznacznik_sar ()const; 
TYP wyznacznik_gauss ()const;

bool operator==(const Macierz<TYP,Rozmiar> & W2)const;
bool operator !=(const Macierz<TYP,Rozmiar> & W2)const;

};





/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 */
template<class TYP,int Rozmiar>
std::istream& operator >> (std::istream &Strm, Macierz<TYP,Rozmiar> &Mac);

template<class TYP,int Rozmiar>
std::ostream& operator << (std::ostream &Strm, const Macierz<TYP,Rozmiar> &Mac);
/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 */









#endif
