#include <string.h>
#include "variaveis.h"

void registasocio(char nomeProprio[], char apelido[])
{
	int i;
	socio novosocio;
	novosocio.numsocio = SOCIOINICIAL + num_socio_actual;
	strcpy(novosocio.nomeProprio, nomeProprio);
	strcpy(novosocio.apelido, apelido);
	novosocio.meses = 0;
	novosocio.credito = 0;
	novosocio.nModalidades = 0;
	for (i=0; i < MAXNUMMODALIDADES; i++) /*inicia o vector de modalidades com tudo a 0*/
		novosocio.modalidades[i] = 0;

	socios[num_socio_actual] = novosocio;
	
	balanco += JOIA;
	
	num_socio_actual++;
	
	return;
}	
