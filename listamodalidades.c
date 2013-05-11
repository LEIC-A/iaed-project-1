#include<stdio.h>
#include "variaveis.h"

#define key(A) (A)
#define bigger(A, B) (key(A) > key(B))
#define equal(A, B) (key(A) == key(B))
#define exch(A, B) {mods t = A; A = B; B = t;}

typedef struct
{
	char m; /*Guarda a letra referente 'a modalidade*/
	int atl; /*Guarda o numero de atletas que praticam a modalidade*/
} mods;

mods aux[MAXNUMMODALIDADES];

void selection(mods a[], int l, int r)
{
	int i, j;
	for (i = l; i < r; i++)
	{
		int min = i;
		for (j = i+1; j <= r; j++)
			if (bigger(a[j].atl, a[min].atl)) /*Ordena as modalidades pelo numero de praticantes*/
				min = j;
		exch(a[i],a[min]);
	}
	for (i = l; i < r; i++)
	{
		int min = i;
		for (j = i+1; j <= r; j++)
			if (equal(a[j].atl, a[min].atl) && bigger(a[min].m, a[j].m)) /*Depois de ordenadas por numero de praticantes, de entre as que tem o mesmo numero de atletas, ordena-se alfabeticamente*/
				min = j;
		exch(a[i],a[min]);
	}
}

void listamodalidades()
{
	int i;
	int j = 0;
	mods lista_temp[MAXNUMMODALIDADES];
	 
	for(i = 0; i < MAXNUMMODALIDADES; i++)
	{
		if(modalidades[i] > 0)
		{
			lista_temp[j].atl = modalidades[i];
      lista_temp[j].m = 'A' + i;
			j++;		
		}
	}    
	
	selection(lista_temp, 0, j - 1);
	
	for(i = 0; i < j; i++)
	{
		printf("%c %d\n", lista_temp[i].m, lista_temp[i].atl);
	}
	return;
}
