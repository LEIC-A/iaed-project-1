#define MAXNOME 50
#define SOCIOINICIAL 101
#define MAXSOCIOS 1000
#define JOIA 200
#define MENSALIDADE 10
#define DIVIDAMAX -100
#define MAXNUMMODALIDADES 26
#define PRIMEIRAMODALIDADE 65 /*'A' em ASCII */
#define ULTIMAMODALIDADE 90 /*'Z' em ASCII */

typedef struct {
	int numsocio;
	char nomeProprio[MAXNOME];
	char apelido[MAXNOME];
	int meses;
	int credito;
	int modalidades[MAXNUMMODALIDADES];
	int nModalidades;
} socio;


/*Variaveis globais*/
int balanco, modalidades [MAXNUMMODALIDADES];
short int num_socio_actual;
socio socios[MAXSOCIOS];
