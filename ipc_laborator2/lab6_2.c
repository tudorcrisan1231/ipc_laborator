//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
//int main() {
//	int n, v[20],i;
//	int* y,* max;
//
//	//citire afisare varianta statica
//	/*scanf("%d", &n);
//
//	for (i = 0; i < n; i++) {
//		scanf("%d", &v[i]);
//	}
//
//	for (i = 0; i < n; i++) {
//		printf("%d ", v[i]);
//	}
//	printf("\n");*/
//
//	//citire afisare varianta dinamica
//	scanf("%d", &n);
//
//	y = (int*)malloc(n * sizeof(int));  //ii aloc memorie vectorului y
//	max = y;
//	
//	for (i = 0; i < n; i++) {
//		scanf("%d", y+i);
//
//		if (*max < *(y + i)) {
//			*max = *(y + i);
//		}
//	}
//	printf("%d ", *max);
//
//
//	/*for (i = 0; i < n; i++) {
//		printf("%d ", *(y+i));
//	}*/
//	return 0;
//}