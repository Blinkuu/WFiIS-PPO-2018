#include "lab03.h"
#include <iostream>

ciag InicjalizujCiagGeometryczny (rozmiarCiagu rozmiar, float iloraz) {

	ciag _ciag;
	_ciag.pierwszy_wyraz = 1;
	_ciag.iloraz = iloraz;

	return _ciag;
}

void Wypisz(ciag _ciag, rozmiarCiagu rozmiar) {

	float a = _ciag.pierwszy_wyraz;
	printf("(%1.f,",a);
	for(int i = 1; i < rozmiar; i++){
		printf(" %1.f,",a*_ciag.iloraz);
		a = a*_ciag.iloraz;
	}
	printf(")\n");
}

void Suma(ciag _ciag, rozmiarCiagu rozmiar) {

	float suma = 0.0;
	float a = _ciag.pierwszy_wyraz;

	for(int i = 0; i < rozmiar; i++) {
		suma += a;
		a = a*_ciag.iloraz;
	}
	printf("suma = %1.f\n",suma);
}

void Iloczyn(ciag _ciag, rozmiarCiagu rozmiar) {

	float iloczyn = 1.0;
	float a = _ciag.pierwszy_wyraz;

	for(int i = 0; i < rozmiar; i++) {
		iloczyn *=a;
		a *= _ciag.iloraz;
	}
	printf("iloczyn = %1.f\n",iloczyn);
}

void Max(ciag _ciag, rozmiarCiagu rozmiar) {

	float a = _ciag.pierwszy_wyraz;
	float max = a;
	for(int i = 0; i < rozmiar; i++) {
		if(a > max)
			max = a;
		a *= _ciag.iloraz;
	}
	printf("max = %1.f\n",max);
}

void Min(ciag _ciag, rozmiarCiagu rozmiar) { 

	float a = _ciag.pierwszy_wyraz;
	float min = a;
	for(int i = 0; i < rozmiar; i++) {
		if(a < min)
			min = a;
		a *= _ciag.iloraz;
	}
	printf("min = %1.f\n",min);
}


void WykonajIWypisz (operacja _operacja, struct ciag _ciag, rozmiarCiagu rozmiar) {

	return _operacja(_ciag,rozmiar);
}


void UsunCiagi() {

	
}