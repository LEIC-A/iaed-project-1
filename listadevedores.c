#include<stdio.h>
#include "variaveis.h"

#define key(A) (A)
#define less(A, B) (key(A) < key(B))

void imprimesocio (int soc, socio vetor[]);

socio aux[MAXSOCIOS];

void mergel2(socio a[], int l, int m, int r) 
{
	int i, j, k;
  for (i = m+1; i > l; i--)
    aux[i-1] = a[i-1];
  for (j = m; j < r; j++)
    aux[r+m-j] = a[j+1];
  for (k = l; k <= r; k++)
    if (less(aux[i].credito, aux[j].credito))
      a[k] = aux[i++];
    else
      a[k] = aux[j--];
}

void mergesortl2(socio a[], int l, int r) 
{
  int m = (r+l)/2;
  if (r <= l)
    return;
  mergesortl2(a, l, m);
  mergesortl2(a, m+1, r);
  mergel2(a, l, m, r);
}

void listadevedores()
{
	int i;
	int j = 0;
	socio lista_temp[MAXSOCIOS];
	 
	for(i = 0; i < num_socio_actual; i++)
	{
		if(socios[i].credito < 0) /* selecciona os socios que devem dinheiro ao XPTO*/
		{
			lista_temp[j] = socios[i];/*copia os socios seleccionados para um novo array*/
			j++;		
		}
	}    
	
	mergesortl2(lista_temp, 0, j - 1); /*ordena o array de socios devedores*/
	
	for(i = 0; i < j; i++)	/*imprime o array de devedores ja ordenada*/
	{
		imprimesocio(i,lista_temp);
	}
	return;                             
}
