#include <stdio.h>
#include "variaveis.h"

void imprimesocio (int soc, socio vetor[])
{
	printf("%d %s %s %d %d %d\n", vetor[soc].numsocio, vetor[soc].nomeProprio, vetor[soc].apelido, vetor[soc].meses, vetor[soc].credito, vetor[soc].nModalidades);
	return;
}
