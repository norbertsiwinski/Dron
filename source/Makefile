CPPFLAGS= -c -g -Iinc -Wall -pedantic -std=c++17 

__start__: Dron
	./Dron

Dron: obj/Dr3D_gnuplot_api.o obj/example.o obj/Wektor.o obj/Macierz.o obj/Prostopadloscian.o obj/MacierzOb.o obj/Dron.o obj/Dno.o obj/Woda.o obj/Graniastoslup.o obj/Plaszczyzna.o obj/PrzeszkodaProstopadloscian.o
	g++ -o Dron obj/example.o obj/Dr3D_gnuplot_api.o obj/Wektor.o obj/Macierz.o obj/Prostopadloscian.o obj/MacierzOb.o obj/Dron.o obj/Dno.o obj/Woda.o obj/Graniastoslup.o obj/Plaszczyzna.o obj/PrzeszkodaProstopadloscian.o -lpthread

obj/example.o: src/example.cpp inc/Dr3D_gnuplot_api.hh
	g++ ${CPPFLAGS} -o obj/example.o src/example.cpp

obj/Dr3D_gnuplot_api.o: src/Dr3D_gnuplot_api.cpp inc/Dr3D_gnuplot_api.hh
	g++ ${CPPFLAGS} -o obj/Dr3D_gnuplot_api.o src/Dr3D_gnuplot_api.cpp

obj/Dron.o: src/Dron.cpp inc/Dron.hh 
	g++ ${CPPFLAGS} -o obj/Dron.o src/Dron.cpp

obj/Plaszczyzna.o: src/Plaszczyzna.cpp inc/Plaszczyzna.hh
	g++ ${CPPFLAGS} -o obj/Plaszczyzna.o src/Plaszczyzna.cpp

inc/Plaszczyzna.hh: inc/Obiekt3D.hh	
	touch inc/Plaszczyzna.hh

inc/Dr3D_gnuplot_api.hh: inc/Draw3D_api_interface.hh
	touch inc/Dr3D_gnuplot_api.hh

obj/Macierz.o: src/Macierz.cpp src/MacierzC.cpp inc/Macierz.hh
	g++ ${CPPFLAGS} -o obj/Macierz.o src/MacierzC.cpp

obj/Graniastoslup.o: src/Graniastoslup.cpp inc/Graniastoslup.hh
	g++ ${CPPFLAGS} -o obj/Graniastoslup.o src/Graniastoslup.cpp

inc/Graniostoslup.hh: inc/Obiekt3D.hh	
	touch inc/Graniostoslup.hh

obj/Dno.o: src/Dno.cpp inc/Dno.hh inc/Plaszczyzna.hh inc/Obiekt3D.hh
	g++ ${CPPFLAGS} -o obj/Dno.o src/Dno.cpp

obj/Woda.o: src/Woda.cpp inc/Woda.hh inc/Plaszczyzna.hh inc/Obiekt3D.hh
	g++ ${CPPFLAGS} -o obj/Woda.o src/Woda.cpp	

obj/MacierzOb.o:inc/Macierz.hh src/MacierzOb.cpp inc/MacierzOb.hh
	g++ ${CPPFLAGS} -o obj/MacierzOb.o src/MacierzOb.cpp

obj/Wektor.o: src/Wektor.cpp src/WektorC.cpp inc/Wektor.hh
	g++ ${CPPFLAGS} -o obj/Wektor.o src/WektorC.cpp

obj/Prostopadloscian.o: src/Prostopadloscian.cpp inc/Prostopadloscian.hh
	g++ ${CPPFLAGS} -o obj/Prostopadloscian.o src/Prostopadloscian.cpp

obj/PrzeszkodaProstopadloscian.o: src/PrzeszkodaProstopadloscian.cpp inc/PrzeszkodaProstopadloscian.hh
	g++ ${CPPFLAGS} -o obj/PrzeszkodaProstopadloscian.o src/PrzeszkodaProstopadloscian.cpp



inc/Prostopadloscian.hh: inc/Obiekt3D.hh
	touch inc/Prostopadloscian.hh
	

clear:
	rm -f obj/*.o Dron