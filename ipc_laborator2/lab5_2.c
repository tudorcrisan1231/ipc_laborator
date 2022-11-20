//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
////sa se sorteze crescator liniile pare si desc inile impare
//int main() {
//	int n, i, a[101][101], m, j, k,l, aux;
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n; j++) {
//			scanf("%d", &a[i][j]);
//		}
//	}
//
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n; j++) {
//			if (i % 2 != 0) {
//				for (k = 0; k < n; k++) {
//					for (l = k; l < n; l++) {
//						if (a[i][k] > a[i][l]) {
//							aux = a[i][k];
//							a[i][k] = a[i][l];
//							a[i][l] = aux;
//						}
//					}
//				}
//			}
//			else {
//				for (k = 0; k < n; k++) {
//					for (l = k; l < n; l++) {
//						if (a[i][k] < a[i][l]) {
//							aux = a[i][k];
//							a[i][k] = a[i][l];
//							a[i][l] = aux;
//						}
//					}
//				}
//			}
//		}
//	}
//
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n; j++) {
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}