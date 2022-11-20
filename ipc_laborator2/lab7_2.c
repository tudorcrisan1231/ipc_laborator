//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
//int main() {
//	int i, n, k=0,j=0,count=0;
//	enum Meniu { iesirea, afisare_baza2, afisare_baza8, afisare_baza16, nr_poz_neg, par_impar, bit_1,bit_0, putere2,vecina,punct_10, val_bit}opt;
//
//	scanf("%d", &n);
//
//
//	while (1) { //se repeta pana la un break;
//		printf("pt tasta 0: iesire.\n");
//		printf("pt tasta 1: Afisare numar in baza 2\n");
//		printf("pt tasta 2: Afisare numar in baza 8\n");
//		printf("pt tasta 3: Afisare numar in baza 16\n");
//		printf("pt tasta 4: Verificare numar pozitiv/negativ\n");
//		printf("pt tasta 5: Verificare numar par/impar\n");
//		printf("pt tasta 6: Afisare cati biti de 1 are reprezentarea binara a numarului\n");
//		printf("pt tasta 7: Afisare cati biti de 0 are reprezentarea binara a numarului\n");
//		printf("pt tasta 8: Afisare daca numarul este egal cu o putere a lui 2\n");
//		printf("pt tasta 9: Afisarea puterii a lui 2 vecina cu numarul -> putere 2 >= nr\n");
//		printf("pt tasta 10: Afisarea intervalului de puteri a lui 2 in care se regaseste numarul -> putere 2<=nr<putere 2\n");
//		printf("pt tasta 11: Afisarea valoarii bitului din reprezentarea binara a numarului de pe o pozitie data de utiliator\n");
//		
//
//
//		printf("Dati opt dorita\n");
//		scanf("%d", &opt);
//
//		switch (opt)
//		{
//		case iesirea:
//			exit(1);
//			break;
//		case afisare_baza2:
//			for (i = 31; i >= 0; i--) {
//				if (((n >> i) & 1) == 0)
//					printf("0");
//				else
//					printf("1");
//			}
//			printf("\n");
//			break;
//		case afisare_baza8:
//			printf("Nr in baza 8 = %#o", n);
//			printf("\n");
//			break;
//		case afisare_baza16:
//			printf("Nr in baza 16 = %#X", n);
//			printf("\n");
//			break;
//		case nr_poz_neg:
//			if (((n >> 31) & 1) == 0) {  //daca primul bit este 0 atuncci e pozitiv altfel e negativ
//				printf("pozitiv");
//			}
//			else {
//				printf("negativ");
//			}
//			printf("\n");
//			break;
//		case par_impar:
//			if (n & 1 == 1) { //daca ultimul bit este 1 este impar daca nu este par
//				printf("impar");
//			}
//			else {
//				printf("par");
//			}
//			printf("\n");
//			break;
//		case bit_1:
//			for (i = 31; i >= 0; i--) {
//				if (((n >> i) & 1) == 1)  //ia fiecare bit in parte si l compara cu 1
//					k++;
//			}
//			printf("%d", k);
//			printf("\n");
//			break;
//		case bit_0:
//			for (i = 31; i >= 0; i--) {
//				if (((n >> i) & 1) == 0)  //ia fiecare bit in parte si l compara cu 0
//					j++;
//			}
//			printf("%d", j);
//			printf("\n");
//		break;
//		case putere2:
//			for (i = 31; i >= 0; i--) {
//				if (((n >> i) & 1) == 1)  
//					count++;
//			}
//			if(count == 1) //daca are doar un singur bit de 1, atunci numarul e putere a lui 2
//				printf("Este putere a lui 2");
//			else
//				printf("NU este putere a lui 2");
//
//			printf("\n");
//			break;
//		case vecina:
//			break;
//		case punct_10:
//			break;
//		case val_bit:
//			break;
//		default:
//			break;
//		}
//	}
//
//	return 0;
//}
//
////XOR
//// 1 ^ 1 = 0
//// 1 ^ 0 = 1
//// 0 ^ 1 = 1
//// 0 ^ 0 = 0
//
