#include <stdio.h>
#include "variaveis.h"

void final()
{
	int i, creditos = 0;
	for(i=0; i<num_socio_actual; i++) /*Percorre todos os socios e soma os seus creditos*/
		creditos += socios[i].credito;
	printf("%d %d\n",num_socio_actual,creditos);
	return;
}
