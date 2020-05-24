
#include "Macierz.cpp"
/* #include "LZespolona.hh" */

template class Macierz<double,3>;
template std::istream & operator >> (std::istream &Strm, Macierz<double, 3> &Mac);
template std::ostream & operator << (std::ostream &strm, const Macierz<double, 3> &Mac);

template class Macierz<double,5>;
template std::istream & operator >> (std::istream &Strm, Macierz<double, 5> &Mac);
template std::ostream & operator << (std::ostream &strm, const Macierz<double, 5> &Mac);

/*

template class Macierz<LZespolona,5>;
template std::istream & operator >> (std::istream &Strm, Macierz<LZespolona, 5> &Mac);
template std::ostream & operator << (std::ostream &strm, const Macierz<LZespolona, 5> &Mac);



template class Macierz<LZespolona,3>;
template std::istream & operator >> (std::istream &Strm, Macierz<LZespolona, 3> &Mac);
template std::ostream & operator << (std::ostream &strm, const Macierz<LZespolona, 3> &Mac);

*/
