//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
//int main() {
//	int a[10][10], i, n, j, s_prime=0, k,aux, aux2;
//	int** b;
//
//	//dinamic
//	scanf("%d", &n);
//	b = (int**)malloc(n * n * sizeof(int));
//
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n; j++) {
//			scanf("%d", b + i * n + j);  //citire cu pointeri matrice
//		}
//	}
//
//			
//	//afisare elemente diagonala principala
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n; j++) {
//			if (i == j) {
//				printf("%d ", *(b + i * n + j));
//			}
//			else {
//				printf(" ");
//			}
//		} printf("\n");
//	}
//
//	//suma nr prime din matrice
//
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n; j++) {
//			aux = 0;
//			aux2 = *(b + i * n + j);
//			for (k = 2; k < aux2; k++) {
//				if (aux2 % k == 0) {
//					aux++;
//				}
//			}
//
//			if (aux == 0 && aux2 != 1) {
//				s_prime += aux2;
//			}
//
//		} 
//	}
//	printf("Suma prime: %d ", s_prime);
//	printf("\n");
//	//numerele palindrom din zona de N a matricei
//
//	//media aritmetica a numerelor care au cel putin o cifra de 0 din matrice
//
//	free(b);
//
//	return 0;
//}