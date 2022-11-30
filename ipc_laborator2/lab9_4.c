#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h> //pt stringuri
#include<ctype.h> //pt functii ex toupper
#include<math.h>
int validare(char caine[21]) {
	int i = 0,ok=0;
	for (i = 0; i < strlen(caine); i++) {
		if (!(caine[i] >= 'a' && caine[i] <= 'z')) {
			ok++;
		}
	}
	if (ok == 0) {
		return 1;
	}
	else {
		return 0;
	}
}
void citire_sir(char** rase, int n) {
	int i;
	char caine[21];

	rase[0] = (char*)malloc(strlen("pitbull") + 1);
	strcpy(rase[0], "pitbull");

	for (i = 1; i < n; i++) {

		do {
			printf("Dati rasa caine:");
			scanf("%s", caine);
		} while (validare(caine)==0);


		rase[i] = (char*)malloc(strlen(caine) + 1);

		strcpy(rase[i], caine);
	}
}
void afisare_sir(char** rase, int n) {
	int i;
	for (i = 0; i < n; i++) {
		printf("%s ", *(rase + i));
	}
	printf("\n");
}
void afisare_crescatorLungime(char** rase, int n) {
	int i, j;
	char aux[21];
	for (i = 0; i < n; i++) {
		for (j = i; j < n; j++) {
			if (strlen(*(rase + i)) > strlen(*(rase + j))) {
				strcpy(aux, *(rase + i));
				strcpy(*(rase + i), *(rase + j));
				strcpy(*(rase + j), aux);
			}
		}
	}
	for (i = 0; i < n; i++) {
		printf("%s ", *(rase + i));
	}
	printf("\n");
}

void maxVocale(char** rase, int n) {
	int max = 0,nr,i,j;
	for (i = 0; i < n; i++) {
		nr = 0;
		for (j = 0; j < strlen(*(rase+i)); j++) {
			if (strchr("aeiou", *(*(rase + i) + j) ) != NULL) {  //*(*(rase + i) + j) fiecare caracter din vectorul de caractere
				nr++;
			}
			
		}
		if (nr > max) {
			max = nr;
		}
	}
	for (i = 0; i < n; i++) {
		nr = 0;
		for (j = 0; j < strlen(*(rase + i)); j++) {
			if (strchr("aeiou", *(*(rase + i) + j)) != NULL) {
				nr++;
			}
		}
		if (nr == max) {
			printf("%s ", *(rase + i));
		}
	}

	
	printf("\n");
}

void invers_mic(char** rase, int n) {
	int min = 21,i,min_poz,k=0;
	char mini[21];

	//puteam face manual si pt strlen, dar mi a fost prea lene :))
	for (i = 0; i < n; i++) {
		if (strlen(*(rase + i)) < min) {  
			min = strlen(*(rase + i));
			min_poz = i;
		}
	}
	for (i = strlen(*(rase + min_poz))-1; i >=0 ; i--) {
		mini[k++] = *(*(rase + min_poz) + i);
	}
	mini[k++] = '\0';

	printf("%s ", mini);
	printf("\n");
}

void lungime_binar(char** rase, int n) {
	int i,j;
	for (i = 0; i < n; i++) {
		for (j = 31; j >= 0; j--) {
			if (((strlen(*(rase + i)) >> j) & 1) == 0)
				printf("0");
			else
				printf("1");
		}
		printf(" ");
	}
	printf("\n");
}

void interval2(char** rase, int n) {
	int i,aux,nr;
	for (i = 0; i < n; i++) {
		aux = strlen(*(rase + i));
		nr = 0;
		while (aux >0) {
			aux /= 2;
			nr++;
		}
		////printf("[%d; %d]", pow(2, nr - 1), pow(2, nr));
		printf("[%g;%g)", pow(2,nr-1), pow(2,nr));
	}
	printf("\n");
}

void matrice(char** rase, int n) {
	int i, s=0,j;
	for (i = 0; i < n; i++) {
		s += strlen(*(rase + i));
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (i == j) {
				printf("%d ", s);
			}
			else {
				printf("10 ");
			}
		}
		printf("\n");
	}

	printf("\n");
}

int main() {
	char **rase;
	int n,opt;

	do {
		printf("Dati numarul de rase(prima rasa va fi implicit pitbull): ");
		scanf("%d", &n);
	} while(n<1 || n>=100);

	rase = (char**)malloc(n * sizeof(char*));

	citire_sir(rase, n);

	while (1) {
		printf("0. Iesire \n");
		printf("1. Afișarea șirului de rase de câini.\n");
		printf("2. Afișarea șirului în ordine crescătoare după lungimea de caractere.\n");
		printf("3. Afișarea rasei/raselor de câini ce are cele mai multe vocale.\n");
		printf("4. Să se copieze în ordine inversă într-un vector de caractere rasa de câine ce are lungimea de caractere cea mai mică.\n");
		printf("5. Să se reprezinte în binar fiecare lungime de rasă de câini.\n");
		printf("6. Să se afișeze între ce puteri a lui 2 se găsește fiecare lungime de rasă de câini.Exemplu: daca lungimea este egală cu 8 atunci intervalul de puteri a lui 2 în care se găsește este : [8; 16).\n");
		printf("7. Să se pună pe diagonala principală a unei matrice suma lungimilor de rase de câini, iar pe restul elementelor să se pună 10. Ordinul matricei este dat de numărul de rase de câini citite\n");

		printf("dati OPT: ");
		scanf("%d", &opt);

		if (opt == 0) {
			exit(1);
		}
		else if (opt == 1) {
			afisare_sir(rase, n);
		}
		else if (opt == 2) {
			afisare_crescatorLungime(rase, n);
		}
		else if (opt == 3) {
			maxVocale(rase, n);
		}
		else if (opt == 4) {
			invers_mic(rase, n);
		}
		else if (opt == 5) {
			lungime_binar(rase, n);
		}
		else if (opt == 6) {
			interval2(rase, n);
		}
		else if (opt == 7) {
			matrice(rase, n);
		}
		else {
			printf("Optiune gresita! \n");
		}
	}

	
	return 0;
}