#include "variaveis.h"

void regista_pagamento(int num_socio, int valor_euros){
	balanco += valor_euros;
	socios[num_socio - SOCIOINICIAL].credito += valor_euros;
}
