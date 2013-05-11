#include <stdio.h>
#include "variaveis.h"

void registasocio(char *nomeProprio, char *apelido);
void inscrevemodalidade(int num_socio, char mod);
void desinscrevemodalidade(int num_socio, char mod);
void listaassociados();
void listaatletas();
void listadevedores();
void listamodalidades();
void final();
void incrementa_mes();
void regista_pagamento(int num_socio, int valor_euros);
void imprimesocio (int soc, socio vetor[]);

int main()
{
	int num, val;
	char c, n[MAXNOME], a[MAXNOME], m;
	balanco = 0;
	num_socio_actual = 0;
	c = getchar();
	while(1)
	{
		switch (c)
		{
		case 'r':
			scanf("%s",n);
			scanf("%s",a);
			registasocio(n, a);
			break;
		case 'i':
			getchar();
			scanf("%d",&num);
			getchar();
			m = getchar();
			inscrevemodalidade(num,m);
			break;
		case 'k':
			getchar();
			scanf("%d",&num);
			getchar();
			m = getchar();
			desinscrevemodalidade(num, m);
			break;
		case 'l':
			getchar();
			scanf("%d",&num);
			switch(num)
			{
			case 0:
				listaassociados();
				break;
			case 1:
				listaatletas();
				break;
			case 2:
				listadevedores();
				break;
			case 3:
				listamodalidades();
				break;
			}
			break;
		case '+':
			incrementa_mes();
			break;
		case 'p':
			getchar();
			scanf("%d",&num);
			getchar();
			scanf("%d",&val);
			regista_pagamento(num,val);
			break;
		case 'x':
			final();
			return 0;
		}
		getchar();
		c = getchar();
	}
}
