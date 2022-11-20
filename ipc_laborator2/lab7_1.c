//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
//int main() {
//	int i,n,k;
//	enum Meniu { iesirea, afisare, alfabetic }opt;
//	char* v;
//
//	v = (char*)malloc(sizeof(char));
//	scanf("%d", &n);
//	
//	for (i = 0; i < n; i++) {
//		do {
//			printf("v[%d]=", i);
//			getchar();
//			scanf("%c", v + i);
//		} while (*(v + i) < 'a' || *(v + i) > 'z');  //do whileul verifica daca toate literele bagate sunt litere mici, altfel iese din citire
//	}
//
//	while (1) { //se repeta pana la un break;
//		printf("pt tasta 1: afiasre.\n");
//		printf("pt tasta 2: afisare in ordine alfabetica\n");
//		printf("pt 0: iesire;\n");
//
//
//		printf("Dati opt dorita\n");
//		scanf("%d", &opt);
//
//		switch (opt)
//		{
//		case iesirea:
//			free(v);
//			exit(1); //inchide meniul / while ul
//			break;
//		case afisare:
//			for (i = 0; i < n; i++) {
//				printf("%c ", *(v + i));
//			}
//			break;
//		case alfabetic:
//			do {
//				k = 1;
//				for (i = 1; i < n; i++)
//					if (*(v + i - 1) > *(v + i))
//					{
//						*(v + i) = *(v + i) ^ *(v + i - 1);
//						*(v + i - 1) = *(v + i) ^ *(v + i - 1);
//						*(v + i) = *(v + i) ^ *(v + i - 1);
//						k = 0;
//					}
//			} while (!k);  //sortare pe biti cu XOR
//			for (i = 0; i < n; i++)
//				printf("%c ", *(v + i));
//			break;
//
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
