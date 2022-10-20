#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

// se citeste un nr intreg de la tastatura, sa se realizeze urmatorul meniu interactiv
// pt tasta 1: sa se calculeze si sa se afiseze inversul nr citit.
// pt tasta 2: sa se afiseze cifrele pare din nr citit
// pt 3: sa se calculeze produsul cifrelor impare din nr citit
// pt 4: sa se calculeze media aritmetica a cifrelor nr citit.
// pt 5: sa se afiseze un mesaj daca nr citit este palindrom. ex:11211
//pt 0: iesire;
int invers(int x) {
	int aux = x, nr = 0;
	while (aux != 0) {
		nr = nr * 10 + aux % 10;
		aux /= 10;
	}
	return nr;
}

int s_pare(int x) {
	int s = 0;

	while (x != 0) {
		if(x%10%2==0)
		s += x % 10;
		x /= 10;
	}

	return s;
}

int p_impare(int x) {
	int s = 1;

	while (x != 0) {
		if (x % 10 % 2 != 0)
			s *= x % 10;
		x /= 10;
	}

	return s;
}

float medie(int x) {
	int s = 0, nr = 0;
	float ma;

	while (x != 0) {
		s += x % 10;
		nr++;
		x /= 10;
	}
	ma =(float) s / nr;

	return ma;
}

void test_palindrom(x) {
	int inversNR = invers(x);
	if (inversNR == x) {
		printf("Este palindrom");
	}
	else {
		printf("NU este palindrom");
	}
}

int main() {
	enum Meniu{iesirea, inv, pare, impare, ma, palindrom}opt;
	int x;
	scanf("%d", &x);

	while (1) { //se repeta pana la un break;
		printf("pt tasta 1: sa se calculeze si sa se afiseze inversul nr citit.\n");
		printf("pt tasta 2: sa se afiseze cifrele pare din nr citit\n");
		printf("pt 3: sa se calculeze produsul cifrelor impare din nr citit\n");
		printf("pt 4: sa se calculeze media aritmetica a cifrelor nr citit.\n");
		printf("pt 5: sa se afiseze un mesaj daca nr citit este palindrom. ex:11211.\n");
		printf("pt 0: iesire;\n");


		printf("Dati opt dorita\n");
		scanf("%d", &opt);

		switch (opt)
		{
		case iesirea:
			exit(1); //inchide meniul / while ul
			break;
		case inv:
			printf("Invers: %d\n", invers(x));
			break;
		case pare:
			printf("Suma cifre pare: %d\n", s_pare(x)); 
			break;
		case impare:
			printf("Produse imapre: %d\n", p_impare(x));
			break;
		case ma:
			printf("MA: %g\n", medie(x));
			break;
		case palindrom:
			test_palindrom(x);
			printf("\n");
			break;
		default:
			break;
		}
	}
	return 0;
}