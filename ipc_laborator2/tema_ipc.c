//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//
//int main() {
//
//	int k, v[101], i, min, max, smin=0, smax = 0, optiune;
//	scanf("%d", &k);
//
//	for (i = 0; i < k; i++) {
//		scanf("%d", &v[i]);
//	}
//	min = v[0];
//	max = v[0];
//	for (i = 0; i < k; i++) {
//		if (v[i] > max) {
//			max = v[i];
//		}
//		if (v[i] < min) {
//			min = v[i];
//		}
//	}
//	for (i = 0; i < k; i++) {
//		if (v[i] > min) {
//			smin += v[i];
//		}
//		if (v[i] < max) {
//			smax += v[i];
//		}
//	}
//
//	printf("Optiune:");
//	scanf("%d", &optiune);
//
//	if (optiune == 1) {
//		printf("Suma minima: %d", smin);
//	}
//	else if(optiune == 2) {
//		printf("Suma maxima: %d", smax);
//	}
//
//	
//	return 0;
//}