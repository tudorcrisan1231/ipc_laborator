////a) Şterge dintr - un şir de caractere un subşir specificat prin poziţie şi lungime.
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h> //pt stringuri
//#include<ctype.h> //pt functii ex toupper
//int suma(int a, int b) {
//	return a + b;
//}
//void prod(int *a, int *b) {  //asa se transmit paramentrii prin functie daca vrem sa ramana asa dupa apelarea functie (ca si in & din c++)
//	printf("%d", *a * *b);
//	(*a)++;
//	(*b)++;
//}
//int main() {
//	//se citesc de la tast 2 nr intregi. sa se calc suma si produsul
//	int a, b,opt;
//	scanf("%d", &a);
//	scanf("%d", &b);
//	
//	
//	while (1) {
//		printf("1. Suma \n");
//		printf("2.Produs\n");
//		printf("0.exit\n");
//
//		scanf("%d", &opt);
//
//		switch (opt) {
//			case 0: exit(1);
//			case 1: printf("%d", suma(a, b)); printf("\n"); break;
//			case 2: 
//				prod(&a, &b); printf("\n"); printf("%d ", a); printf("%d", b); printf("\n");
//				// si functia trebuie chemata cu & daca vrem sa pastram datele scimbate in functie
//				break;
//		}
//	}
//	return 0;
//}