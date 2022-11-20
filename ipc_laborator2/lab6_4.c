//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
//int main() {
//	int a[10][10], i, n,j;
//	int** b;
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++)
//		for (j = 0; j < n; j++)
//			scanf("%d", &a[i][j]);
//
//
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n; j++) {
//			printf("%d ", a[i][j]);
//		} printf("\n");	
//	}
//
//
//	//dinamic
//	scanf("%d", &n);
//	b = (int**)malloc(n * n * sizeof(int));
//
//	for (i = 0; i < n; i++)
//		for (j = 0; j < n; j++)
//			scanf("%d", b + i*n + j);  //citire cu pointeri matrice
//
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n; j++) {
//			printf("%d ", *(b + i * n + j));
//		} printf("\n");
//	}
//
//
//
//	return 0;
//}