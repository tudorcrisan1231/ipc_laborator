//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
//int main() {
//	int n, v[20], i, sp = 0, pi = 1;
//	int* y;
//
//
//	//citire afisare varianta dinamica
//	scanf("%d", &n);
//
//	y = (int*)malloc(n * sizeof(int));  //ii aloc memorie vectorului y
//	
//
//	for (i = 0; i < n; i++) {
//		scanf("%d", y + i);
//
//		if (*(y + i) % 2 == 0) {
//			sp += *(y + i);
//		}
//		else {
//			pi *= *(y + i);
//		}
//	}
//	printf("Suma pare: %d Produs imp: %d", sp, pi);
//
//	free(y);  //sterg memoria suplimentara (nu merge tot timpul) :))
//
//	return 0;
//}