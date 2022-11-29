////a) Şterge dintr - un şir de caractere un subşir specificat prin poziţie şi lungime.
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h> //pt stringuri
//#include<ctype.h> //pt functii ex toupper
//int validare(char nume[21]) {
//	int ok = 0, i;
//	if (nume[0] >= 'A' && nume[0] <= 'Z') {
//		for (i = 1; i < strlen(nume); i++) {
//			if (!(nume[i] >= 'a' && nume[i] <= 'z')) {
//				ok++;
//			}
//		}
//		if (ok == 0) {
//			return 1;
//		}
//		else {
//			return 0;
//		}
//	}
//	else {
//		return 0;
//	}
//
//}
//void citire_sir(char** tenis, int n) {
//	int i;
//	char nume[21];
//	for (i = 0; i < n; i++) {
//		do {
//			printf("dati nume: ");
//			scanf("%s", nume);
//		} while (validare(nume) == 0);
//		tenis[i] = (char*)malloc(strlen(nume) + 1); //ii aloc memorie fiecarui cuvant din sir
//
//		if (tenis[i] == NULL) {
//			printf("Eroare alocare memorie");
//			exit(0);
//		}
//		else {
//			strcpy(tenis[i], nume); //bag in sir fiecare nume citit
//		}
//	}
//}
//
//void afisare_sir(char** tenis, int n) {
//	int i;
//	for (i = 0; i < n; i++) {
//		printf("%s ", *(tenis + i));
//	}
//	printf("\n");
//}
//void ord_alf(char** tenis, int n) {
//	int i,j;
//	char aux[21];
//	for(i=0;i<n;i++)
//		for (j = i + 1; j < n; j++) 
//			if (strcmp(*(tenis+i), *(tenis + j)) > 0) {
//				strcpy(aux, *(tenis + i));
//				strcpy(*(tenis + i), *(tenis + j));
//				strcpy(*(tenis + j),aux);
//			}
//	
//	for (i = 0; i < n; i++) {
//		printf("%s ", *(tenis + i));
//	}
//	printf("\n");
//}
//
//void ord_INValf(char** tenis, int n) {
//	int i, j;
//	char aux[21];
//	for (i = 0; i < n; i++)
//		for (j = i + 1; j < n; j++)
//			if (!(strcmp(*(tenis + i), *(tenis + j)) > 0)) {
//				strcpy(aux, *(tenis + i));
//				strcpy(*(tenis + i), *(tenis + j));
//				strcpy(*(tenis + j), aux);
//			}
//
//	for (i = 0; i < n; i++) {
//		printf("%s ", *(tenis + i));
//	}
//	printf("\n");
//}
//
//void nume_binar(char** tenis, int n) {
//	int i,aux;
//	for (i = 0; i < n; i++) {
//		aux = strlen(*(tenis + i));
//		while (aux > 0) {
//			printf("%d", aux % 2); 
//			aux = aux / 2;
//		}
//		printf("\n");
//	}
//	printf("\n");
//}
//
//void ord_crescLung(char** tenis, int n) {
//	int i, j;
//	char aux[21];
//	for (i = 0; i < n; i++)
//		for (j = i + 1; j < n; j++)
//			if ( strlen(*(tenis + i))  > strlen(*(tenis + j)) ) {
//				strcpy(aux, *(tenis + i));
//				strcpy(*(tenis + i), *(tenis + j));
//				strcpy(*(tenis + j), aux);
//			}
//
//	for (i = 0; i < n; i++) {
//		printf("%s ", *(tenis + i));
//	}
//	printf("\n");
//}
//
//void tabelPointeriLungime(char** tenis, int n) {
//	int* tabel;
//	int i;
//	tabel = (int*)malloc(n * sizeof(int));
//	
//	for (i = 0; i < n; i++) {
//		*(tabel + i) = strlen(*(tenis+i));
//	}
//
//	for (i = 0; i < n; i++) {
//		printf("%d ", *(tabel + i));
//	}
//	printf("\n");
//}
//
//void matriceMax(char** tenis, int n) {
//	int max = strlen(*(tenis + 0)) , i,j;
//
//	for (i = 0; i < n; i++) {
//		if (max < strlen(*(tenis + i)) ) {
//			max = strlen(*(tenis + i));
//		}
//	}
//
//	for (i = 0; i < max; i++) {
//		for (j = 0; j < max; j++) {
//			if ((i == max - 1 && j == 0) || (i == max - 1 && j == max - 1)) {
//				printf("%d ", max);
//			}
//			else {
//				printf("0 ");
//			}
//		}
//		printf("\n");
//	}
//	//printf("%d",max);
//	printf("\n");
//}
//
//
//int main() {
//	//fie un sir fomrat din max 100 nume de tenismeni, realizati un program C in care se citesc numele de tenismen de la tastatura apoi realizati un meniu interactiv cu urm optiuni
//	//0. iesire
//	//1. afisare tenismeni cititi
//	//2. afisare tenismeni in ord alfabetica
//	//3. afisare tenismeni in ord invers alfabetica
//	//4. afisarea valorii binare a lungimii numelui fiecarui tenismen
//	//5. afisare in ord crescatoare dupa lungimea numelui fiecarui tenismen
//	//6. copierea intr un tabel de pointeri a lungimii fiecarui nume de tenismen
//	//7. afisarea sub forma de matrice a lungimii numelui cel mai mare in colturile de jos, iar in rest 0
//	//OBS: numele este validat fiind citit corect daca incepe cu litera mare, iar in rest contine doar litere mici
//	//     se pot citii max 100 nume de tensmen, iar fiecare tenismne are max 20 car.
//	//     se va folosi alocarea dinamica de memorie
//	//     pt fiecare  punct se va face o functie
//	int n,opt;
//	char** tenis;
//
//	do {
//		scanf("%d", &n);
//	} while (n < 0 || n > 100);
//	
//	tenis = (char**)malloc(n * sizeof(char*)); //aloc memorie
//
//	if (tenis == NULL) {
//		printf("Eroare alocare memorie");
//		exit(0);
//	}	
//
//	citire_sir(tenis, n);
//
//
//	while (1) {
//		printf("1. afisare tenismeni cititi \n");
//		printf("2. afisare tenismeni in ord alfabetica\n");
//		printf("3. afisare tenismeni in ord invers alfabetica\n");
//		printf("4. afisarea valorii binare a lungimii numelui fiecarui tenismen\n");
//		printf("5. afisare in ord crescatoare dupa lungimea numelui fiecarui tenismen\n");
//		printf("6. copierea intr un tabel de pointeri a lungimii fiecarui nume de tenismen\n");
//		printf("7. afisarea sub forma de matrice a lungimii numelui cel mai mare in colturile de jos, iar in rest 0\n");
//		printf("0.exit\n");
//
//		scanf("%d", &opt);
//
//		switch (opt) {
//			case 0: exit(1);
//			case 1: afisare_sir(tenis, n); break;
//			case 2: ord_alf(tenis, n);  break;
//			case 3: ord_INValf(tenis, n);  break;
//			case 4: nume_binar(tenis,n); break;
//			case 5: ord_crescLung(tenis, n);  break;
//			case 6: tabelPointeriLungime(tenis, n); break;
//			case 7: matriceMax(tenis, n);  break;
//			default: printf("opt gresita\n");
//		}
//	}
//	return 0;
//}