#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
typedef struct angajat {
	char nume[20], cod_angajare[7];
	int varsta, salariu;
}A;

int validare(char* sir) {
	int k = 0, l = 0,i;
	if (sir[0] >= 'A' && sir[0] <= 'Z') {
		k = strlen(sir);
		for (i = 0; sir[i] != '\0'; i++) {
			if (sir[i] >= 'a' && sir[i] <= 'z') {
				l++;
			}
		}
		if (k >= 3 && k == l + 1) {
			return 1;
		}
	}
	return 0;
}

void adaugare_angajat(A* angajat, int *nr) {
	(*nr)++;
	do {
		printf("Dati numele angajatului: ");
		scanf("%s", (angajat + *nr)->nume);
	} while (validare((angajat + *nr)->nume) == 0);

	do {
		printf("Dati varsta: ");
		scanf("%d", &((angajat + *nr)->varsta));
	} while ((angajat + *nr)->varsta < 16 || (angajat + *nr)->varsta > 100);

	printf("Dati salariu: ");
	scanf("%d", &((angajat + *nr)->salariu));

	
	/*generare cod angajare*/
	((angajat + *nr)->cod_angajare)[0] = ((angajat + *nr)->nume)[0];
	((angajat + *nr)->cod_angajare)[1] = ((angajat + *nr)->nume)[1];
	((angajat + *nr)->cod_angajare)[2] = '-';

	
	((angajat + *nr)->cod_angajare)[3] = (*nr) / 100 % 10 + '0';
	((angajat + *nr)->cod_angajare)[4] = (*nr) / 10 % 10 + '0';
	((angajat + *nr)->cod_angajare)[5] = (*nr) % 10 + '0';


	((angajat + *nr)->cod_angajare)[6] = '\0';
	printf("%s", (angajat + *nr)->cod_angajare);
}

void afisare(A* angajat, int nr) {
	printf("\033[0;31m %s %s %d %d", (angajat + nr)->nume, (angajat + nr)->cod_angajare, (angajat + nr)->varsta, (angajat + nr)->salariu);
	printf("\n");
	printf("\033[0m");
}

void afisare_dupaSalar(A* angajat, int nr, int salar) {
	int i;
	for (i = 0; i <= nr; i++) {
		if ((angajat+i)->salariu > salar) {
			printf("\033[0;31m %s %s %d %d", (angajat + i)->nume, (angajat + i)->cod_angajare, (angajat + i)->varsta, (angajat + i)->salariu);
			printf("\n");
			printf("\033[0m");
		}
		printf("\n");
	}
}

void sortare_dupaNume(A* angajati, int nr) {
	int i,j;
	A aux;
	
	for (i = 0; i <= nr; i++) {
		for (j = i; j <= nr; j++) {
			if (strcmp((angajati+i)->nume, (angajati + j)->nume) > 0) {
				aux = *(angajati + i);
				*(angajati + i) = *(angajati + j);
				*(angajati + j) = aux;
			}
		}
	}

	for (i = 0; i <= nr; i++) {
		printf("\033[0;31m %s %s %d %d", (angajati + i)->nume, (angajati + i)->cod_angajare, (angajati + i)->varsta, (angajati + i)->salariu);
		printf("\n");
		printf("\033[0m");
	}
}

void sortare_desc_dupaSalar(A* angajati, int nr) {
	int i, j;
	A aux;

	for (i = 0; i <= nr; i++) {
		for (j = i; j <= nr; j++) {
			if ((angajati + i)->salariu < (angajati + j)->salariu) {
				aux = *(angajati + i);
				*(angajati + i) = *(angajati + j);
				*(angajati + j) = aux;
			}
		}
	}

	for (i = 0; i <= nr; i++) {
		printf("\033[0;31m %s %s %d %d", (angajati + i)->nume, (angajati + i)->cod_angajare, (angajati + i)->varsta, (angajati + i)->salariu);
		printf("\n");
		printf("\033[0m");
	}
}

void cop_prim_caracter(A* angajati, int nr) {
	int *tab,i;
	tab = (int*)malloc(nr * sizeof(int));

	for (i = 0; i <= nr; i++) {
		/*printf("%c ", ((angajati + i)->nume)[0]);*/
		*(tab + i) = ((angajati + i)->nume)[0];
	}

	for (i = 0; i <= nr; i++) {
		printf("%c ", *(tab + i));
	}
}

void salar_binar(A* angajati, int nr) {
	int i,j;
	for (i = 0; i <= nr; i++) {
		for (j = 31; j >= 0; j--) {
			if ((((angajati + i)->salariu >> j) & 1) == 0)
				printf("0");
			else
				printf("1");
		}
		printf(" ");
	}
}

void matrice(A* angajati, int nr) {
	int i,max = 0,j;
	for (i = 0; i <= nr; i++) {
		if ((angajati + i)->salariu > max) {
			max = (angajati + i)->salariu;
		}
	}

	for (i = 0; i <= nr; i++) {
		for (j = 0; j <= nr; j++) {
			if (i == j) {
				printf("%d ", max);
			}
			else {
				printf("10 ");
			}
		}
		printf("\n");
	}
}
void doua_vocale(A* angajati, int nr) {
	int i,nrv,j;
	for (i = 0; i <= nr; i++) {
		nrv= 0;
		for (j = 0; j < strlen((angajati + i)->nume); j++) {
			if (strchr("aeiouAEIOU", (angajati + i)->nume[j]) != 0) {
				nrv++;
			}
		}
		
		if (nrv > 2) {
			printf("\033[0;31m %s ", (angajati + i)->nume);
			printf("\033[0m");
		}
	}
}

void stergere(A* angajati, int *nr) {
	int k = 0, i, j;
	for (i = 0; i <= (*nr - k); i++)
		if ((angajati+i)->varsta > 60)
		{
			k++;
			for (j = i; j <= (*nr - k); j++)
				*(angajati + j) = *(angajati + j + 1);
			i--;
		}
	*nr = *nr - k;

	printf("\033[0;31m Angajatii au fost actualizati!");
	printf("\033[0m");
}

int main() {
	A angajati[50];
	int opt, n=-1,i, salar_data;
	/*tine evidenta angajatilor in firma
	fiecare anjagat are: nume, cod_angajare, varsta, salariu

	obs: numele angajatului este corect: cel putin 3 caracere, incepe cu litera mare si restul litere mici
	obs: codul de agajare este generat automat avand forma: Ll-nnn unde L=prima litera din numa, l=a 2 a litera din nume, nnn=numarul de adaugare a angajatului(ex: 000, 001, 002)
	obs: varsta este corecta daca: 16<varsta<100
	obs: se vor utiliza functii*/


	while (1) {
		printf("\033[0;32m 0. Iesire \n");
		printf("1. Adaugarea unei angajat\n");
		printf("2. Afisarea angajatilor\n");
		printf("3. Cautarea unei angajat cu un salar mai mare decat unul precizat de utilizator\n");
		printf("4. Sortare angajatilor alfabetic dupa nume.\n");
		printf("5. Sortare angajatilor descrescator dupa salariu \n");
		printf("6. Reprezentare binara a salariului fiecarui angajat\n");
		printf("7. Copierea intr un tabel de pointeri a primul carater din numele angajatilor\n");
		printf("8. Afisare unuei matrici de ord = nr angatilor ce are pe diag princ cel mai mare salariu, iar restul = 10\n");
		printf("9. Afisare angajatior ce au mai mult de 2 vocale in nume\n");
		printf("10. Stergerea angajatilor cu varsta > 60 ani\n");
		printf("\033[0m");
		
		printf("dati OPT: ");
		scanf("%d", &opt);

		if (opt == 0) {
			exit(1);
		}
		else if (opt == 1) {
			adaugare_angajat(angajati, &n);
			printf("\n");
		}
		else if (opt == 2) {
			for (i = 0; i <= n; i++) {
				afisare(angajati, i);
				printf("\n");
			}
			printf("\n");
		}
		else if (opt == 3) {
			printf("Dati salar: ");
			scanf("%d", &salar_data);
			afisare_dupaSalar(angajati, n, salar_data);
			printf("\n");
		}
		else if (opt == 4) {
			sortare_dupaNume(angajati, n);
			printf("\n");
		}
		else if (opt == 5) {
			sortare_desc_dupaSalar(angajati, n);
			printf("\n");
		}
		else if (opt == 6) {
			salar_binar(angajati, n);
			printf("\n");
		}
		else if (opt == 7) {
			cop_prim_caracter(angajati, n);
			printf("\n");
		}
		else if (opt == 8) {
			matrice(angajati, n);
			printf("\n");
		}
		else if (opt == 9) {
			doua_vocale(angajati, n);
			printf("\n");
		}
		else if (opt == 10) {
			stergere(angajati, &n);
			printf("\n");
		}

		else {
			printf("Optiune gresita! \n");
		}
	}
	return 0;
}

