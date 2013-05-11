#include "variaveis.h"

void imprimesocio (int soc, socio vetor[]);

void listaassociados()
{
	int i;
	for(i = 0; i < num_socio_actual; i++) /* percorre todos os socios por ordem de inscricao (numero de socio) */
		imprimesocio(i, socios);
	return;
}
