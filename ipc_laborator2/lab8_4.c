//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h> //pt stringuri
//#include<ctype.h> //pt functii ex toupper
//
//int main() {
//	//siruri de caractere
//	//fie un sir format din max 14 nume de materii, fiecare materie avand max 30caractere, cititi n materii apoi faceti un meni interactiv cu urm opt:
//	// 0. Iesire
//	// 1. afisare materii
//	// 2. afisare materii invers
//	// 3. sortare in ord alfabetica a materiilor
//	// 4. inlocuirea tuturor caracterelor "i" cu "*"
//
//	int n,i,j;
//	char materii[15][31], aux[30];
//	enum Meniu { iesirea, opt1, opt2, opt3, opt4 }opt;
//
//
//	do {   //se repeta pana cand userul da valori intre 0 si 14
//		printf("dati nr de materii: ");
//		scanf("%d", &n);
//	} while (n < 0 || n>14);
//	
//	for (i = 0; i < n; i++) {
//		scanf("%s", materii[i]);
//	}
//
//	while (1) { //se repeta pana la un break;
//		printf("pt tasta 0: iesire.\n");
//		printf("pt tasta 1: afisare materii\n");
//		printf("pt tasta 2: afisare materii invers\n");
//		printf("pt tasta 3: sortare in ord alfabetica a materiilor\n");
//		printf("pt tasta 4: inlocuirea tuturor caracterelor i cu *\n");
//				
//		
//		printf("Dati opt dorita\n");
//		scanf("%d", &opt);
//		
//		switch (opt)
//		{
//			case iesirea:
//				exit(1);
//				break;
//			case opt1:
//				for (i = 0; i < n; i++) {
//					printf("%s ", materii[i]);
//				}
//				break;
//			case opt2:
//				for (i = 0; i < n; i++) {
//					for (j = strlen(materii[i]); j >= 0; j--) {
//						printf("%c", materii[i][j]);
//					}
//					printf(" ");
//				}
//				break;
//			case opt3:
//				for (i = 0; i < n; i++) {
//					for (j = i; j < n; j++) {
//						if (strcmp(materii[i], materii[j]) > 0) {
//							strcpy(aux, materii[i]);
//							strcpy(materii[i], materii[j]);
//							strcpy(materii[j],aux);
//						}
//					}
//				}
//
//				for (i = 0; i < n; i++) {
//					printf("%s ", materii[i]);
//				}
//				break;
//			case opt4:
//				for (i = 0; i < n; i++) {
//					for (j = 0; j < strlen(materii[i]); j++) {
//						if (materii[i][j] == 'i')
//							materii[i][j] ='*';
//					}
//				}
//				for (i = 0; i < n; i++) {
//					printf("%s ", materii[i]);
//				}
//				break;
//			default:
//				break;
//		}
//	}
//	return 0;
//}