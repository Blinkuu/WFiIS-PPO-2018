#include "lab03.h"
#include <iostream>

float* wyrazy_do_free[2];

ciag InicjalizujCiagGeometryczny (rozmiarCiagu rozmiar, const float iloraz) {

	ciag _ciag;
	_ciag.wyrazy = (float*)malloc(rozmiar * sizeof(float));
	_ciag.wyrazy[0] = 1.0;
	_ciag.iloraz = iloraz;
	for(int i = 1; i < rozmiar; i++) { 
		_ciag.wyrazy[i] = _ciag.wyrazy[i-1]*_ciag.iloraz;
	}
	
  if(iloraz == 2.0) {
    wyrazy_do_free[0] = _ciag.wyrazy;  
    printf("wyrazy_do_free[0] = %p\n", wyrazy_do_free[0]);
  }
  else if (iloraz == 3.0) {
    wyrazy_do_free[1] = _ciag.wyrazy;  
    printf("wyrazy_do_free[1] = %p\n", wyrazy_do_free[1]);
  }

  
	return _ciag;
}

void Wypisz(ciag _ciag, rozmiarCiagu rozmiar) {
	printf("(");
	int i;
	for(i = 0; i < rozmiar-1; i++){
		printf("%1.f, ",_ciag.wyrazy[i]);
	}
	printf("1.%f)\n",_ciag.wyrazy[i]);
}

void Suma(ciag _ciag, rozmiarCiagu rozmiar) {

	float suma = 0.0;

	for(int i = 0; i < rozmiar; i++) {
		suma += _ciag.wyrazy[i];
	}
	printf("suma = %1.f\n",suma);
}

void Iloczyn(ciag _ciag, rozmiarCiagu rozmiar) {

	float iloczyn = 1.0;

	for(int i = 0; i < rozmiar; i++) {
		iloczyn *= _ciag.wyrazy[i];
	}
	printf("iloczyn = %1.f\n",iloczyn);
}

void Max(ciag _ciag, rozmiarCiagu rozmiar) {

	float max = _ciag.wyrazy[0];;
	for(int i = 0; i < rozmiar; i++) {
		if(_ciag.wyrazy[i] > max)
			max = _ciag.wyrazy[i];
	}
	printf("max = %1.f\n",max);
}

void Min(ciag _ciag, rozmiarCiagu rozmiar) { 

	float min = _ciag.wyrazy[0];;
	for(int i = 0; i < rozmiar; i++) {
		if(_ciag.wyrazy[i] < min)
			min = _ciag.wyrazy[i];
	}
	printf("min = %1.f\n",min);
}


void WykonajIWypisz (operacja _operacja, struct ciag _ciag, rozmiarCiagu rozmiar) {

	return _operacja(_ciag,rozmiar);
}


void UsunCiagi() {

  free(wyrazy_do_free[0]);
  free(wyrazy_do_free[1]);
  
}