#ifndef _LAB03_H
#define _LAB03_H

#include <iostream>

typedef int rozmiarCiagu;
typedef struct ciag ciag;

typedef void(*operacja)(ciag,rozmiarCiagu);

struct ciag {

	float *wyrazy;
	float iloraz;
};



ciag InicjalizujCiagGeometryczny (rozmiarCiagu rozmiar, float iloraz);

void Wypisz(ciag ciag, rozmiarCiagu rozmiar);

void Suma(ciag ciag, rozmiarCiagu rozmiar);

void Iloczyn(ciag ciag, rozmiarCiagu rozmiar);

void Max(ciag ciag, rozmiarCiagu rozmiar);

void Min(ciag ciag, rozmiarCiagu rozmiar);

void WykonajIWypisz (operacja _operacja, struct ciag ciag, rozmiarCiagu rozmiar);

void UsunCiagi();

#endif