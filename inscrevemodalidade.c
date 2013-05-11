#include "variaveis.h"

void inscrevemodalidade (int num_socio, char mod)
{
	int soc = num_socio - SOCIOINICIAL;
	if (socios[soc].credito >= 0 && socios[soc].modalidades[mod - PRIMEIRAMODALIDADE] == 0) /*Verifica se o socio nao tem dividas e se nao esta' ja inscrito na modalidade*/
	{
		socios[soc].modalidades[mod - PRIMEIRAMODALIDADE] = 1; /*Marca que o socio fica inscrito na modalidade*/
		socios[soc].nModalidades ++; /*Incrementa o total de modalidades praticadas pelo atleta*/
		socios[soc].credito += MENSALIDADE; /*Adiciona o valor da mensalidade ao credito do atleta*/
		balanco += MENSALIDADE; /*Regista o pagamento*/
		modalidades[mod - PRIMEIRAMODALIDADE] ++; /*Incrementa o total de atletas a praticar a modalidade*/
	}
	return;
}
