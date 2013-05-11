#include <stdio.h>
#include "variaveis.h"

void desinscrevemodalidade(int num_socio, char mod)
{
	int soc = num_socio - SOCIOINICIAL;
	if(socios[soc].modalidades[mod - PRIMEIRAMODALIDADE] != 0) /*Verifica se o socio esta' inscrito na modalidade e, se estiver, desinscreve-o*/
	{
		socios[soc].modalidades[mod - PRIMEIRAMODALIDADE] = 0; /*Desinscricao*/
		socios[soc].nModalidades--; /*Decrementa o numero de modalidades praticadas pelo socio*/
		modalidades[mod - PRIMEIRAMODALIDADE]--; /*Decrementa o numero de praticantes da modalidade*/
	}	
	return;
}
