#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h> //pt stringuri
#include<ctype.h> //pt functii ex toupper
typedef struct unelte {
	char nume[20], marca[7], cod[3];
	int pret;
}U;

int validare_nume(char nume[20]) {
	int i = 0, ok=0;
	for (i = 0; i < strlen(nume); i++) {
		if (!((nume[i] >= 'a' && nume[i] <= 'z') || (nume[i] >= '0' && nume[i] <= '9'))) {
			ok++;
		}
	}
	if (ok == 0)
		return 1;
	else
		return 0;
}

void adaugare_unealta(U *unelte, int *nr) {
	(*nr)++;

	do {
		printf("Adauga nume: ");
		scanf("%s", (unelte + *nr)->nume);
	} while (validare_nume((unelte + *nr)->nume) == 0);
	
	do {
		printf("Adauga marca: ");
		scanf("%s", (unelte + *nr)->marca);
	} while (strlen((unelte + *nr)->marca) < 2);


	printf("Adauga pret: ");
	scanf("%d", &((unelte + *nr)->pret));

	((unelte + *nr)->cod)[0] = (unelte + *nr)->marca[strlen((unelte + *nr)->marca) - 2];
	((unelte + *nr)->cod)[1] = (unelte + *nr)->marca[strlen((unelte + *nr)->marca) - 1];
	((unelte + *nr)->cod)[2] = '\0';  //terminator de sirs

	printf("Codul generat: %s", ((unelte + *nr)->cod));
}

void afisare_unelte(U unelte[10], int nr) {
	int i;
	for (i = 0; i <= nr; i++) {
		printf("\033[0;31m %s %s %s %d", unelte[i].nume, unelte[i].marca, unelte[i].cod, unelte[i].pret);
		printf("\n");
		printf("\033[0m");
	}
}

void cautare_unealta(U unelte[10], int nr, char nume[20]) {
	int i, ok=0;
	for (i = 0; i <= nr; i++) {
		if (strcmp(unelte[i].nume, nume) == 0) {
			printf("\033[0;31m%s %s %s %d", unelte[i].nume, unelte[i].marca, unelte[i].cod, unelte[i].pret);
			printf("\n");
			printf("\033[0m");
			ok++;
		}
	}
	if (ok == 0) {
		printf("\033[0;31mNu s a gasit niciun produs cu numele %s. Incercati din nou", nume);
		printf("\033[0m");
	}
}

void lit_C(U unelte[10], int nr) {
	int i;
	for (i = 0; i <= nr; i++) {
		if (unelte[i].nume[0] == 'c') {
			printf("\033[0;31m%s %s %s %d", unelte[i].nume, unelte[i].marca, unelte[i].cod, unelte[i].pret);
			printf("\n");
			printf("\033[0m");
		}
	}
}

void cautare_pret(U unelte[10], int nr, int pret) {
	int i, ok = 0;
	for (i = 0; i <= nr; i++) {
		if (unelte[i].pret < pret) {
			printf("\033[0;31m%s %s %s %d", unelte[i].nume, unelte[i].marca, unelte[i].cod, unelte[i].pret);
			printf("\n");
			printf("\033[0m");
			ok++;
		}
	}
	if (ok == 0) {
		printf("\033[0;31mNu s a gasit niciun produs cu pretul < %d", pret);
		printf("\033[0m");
	}
}

void sortare_desc(U unelte[10], int nr) {
	int preturi[10], i, k=0, j,aux;
	for (i = 0; i <= nr; i++) {
		preturi[k++] = unelte[i].pret;
	}

	for (i = 0; i < k; i++) {
		for (j = i; j < k; j++) {
			if (preturi[i] < preturi[j]) {
				aux = preturi[i];
				preturi[i] = preturi[j];
				preturi[j] = aux;
			}
		}
	}

	for (i = 0; i < k; i++) {
		printf("%d ", preturi[i]);
	}
}

int main() {
	// prob 4 din prob suplimentare

	int opt, nr=-1, pret;
	U unelte[10];
	char nume[20];

	while (1) {
		printf("\033[0;32m 0. Iesire \n");
		printf("1. Adaugarea unei unelte.\n");
		printf("2. Afisarea uneltelor din magazin\n");
		printf("3. Cautarea unei unelte după nume, numele este dat de utilizator de la tastatura.\n");
		printf("4. Sa se afiseze toate uneltele care incep cu litera ‘c’.\n");
		printf("5. Sa se afiseze uneltele care au un pret mai mic decât un pret dat de utilizator de la tastatura\n");
		printf("6. Sa se copieze într-un tablou pretul fiecarei unelte, apoi sa se sorteze acel tablou in ordine descrescatoare, iar la final sa se afiseze tabloul.\n");
		printf("7. Sa se afiseze reprezentarile binare ale pretului – se vor utiliza operatii pe biti pentru reprezentarea binara.\n");
		printf("8. Sa se afiseze cate unelte au pretul mai mic cu 1 decat o putere a lui 2 – se vorutiliza operatii pe biti pentru aflarea daca pretul este mai mic cu 1 decat o putere a lui 2.\n");
		printf("9. Sa se afiseze pe diagonala secundara a unei matrice, de ordin dat de numarul de unelte, lungimea cea mai mare a marcii uneltelor, iar pe restul elementelor sa se puna 0.\n");
		printf("10. Sa se afiseze care este unealta cu pretul cel mai mare.\n");
		printf("11. Sa se sorteze uneltele in ordine alfabetica dupa marca, apoi sa se afiseze uneltele.\n");
		printf("\033[0m");
				
		printf("dati OPT: ");
		scanf("%d", &opt);

		switch (opt)
		{
			case 0:
				exit(1);
				break;
			case 1:
				adaugare_unealta(unelte, &nr);
				printf("\n");
				break;
			case 2:
				afisare_unelte(unelte, nr);
				printf("\n");
				break;
			case 3:
				printf("Cauta dupa nume: ");
				scanf("%s", nume);
				cautare_unealta(unelte, nr, nume);
				printf("\n");
				break;
			case 4:
				lit_C(unelte, nr);
				printf("\n");
				break;
			case 5:
				printf("Adauga pret: ");
				scanf("%d", &pret);
				cautare_pret(unelte, nr, pret);
				printf("\n");
				break;
			case 6:
				sortare_desc(unelte, nr);
				printf("\n");
				break;
			case 7:
				printf("7");
				printf("\n");
				break;
			case 8:
				printf("8");
				printf("\n");
				break;
			case 9:
				printf("9");
				printf("\n");
				break;
			case 10:
				printf("10");
				printf("\n");
				break;
			case 11:
				printf("11");
				printf("\n");
				break;
			default:
				break;
		}
	}
	return 0;
}