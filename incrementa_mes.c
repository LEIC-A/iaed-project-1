#include <stdio.h>
#include "variaveis.h"

void incrementa_mes()
{
	int i, j;
	for (i=0; i < num_socio_actual; i++)
	{
		socios[i].credito -= MENSALIDADE * socios[i].nModalidades; /*Decrementa o valor das mensalidades de cada atleta*/
		socios[i].meses ++;
		if ((socios[i].credito < DIVIDAMAX) && (socios[i].nModalidades != 0)) /*Verifica se o socio e' atleta e tem uma divida superior 'a permitida e, se tiver, desinscreve-o de todas as modalidades*/
			{
				socios[i].nModalidades = 0;
				for (j=0; j < MAXNUMMODALIDADES; j++)
					if (socios[i].modalidades[j] != 0)
					{						
						socios[i].modalidades[j] = 0;
						modalidades[j]--;
					}
			} 	
	}
	printf("%d\n",balanco);
	balanco = 0; /*Reinicia o balanco mensal*/
}
