#include "variaveis.h"

void imprimesocio (int soc, socio vetor[]);

void listaatletas()
{
	int i;
	for(i = 0; i < num_socio_actual; i++)
	{
		if(socios[i].nModalidades != 0)/*selecciona os associados com estatuto de atleta*/
			imprimesocio(i,socios);
	}
	return;
}
