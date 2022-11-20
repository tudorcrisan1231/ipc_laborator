//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
//int main() {
//	int n, v[101],i, j, k, aux, sum=0;
//	float ma;
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++) {
//		scanf("%d", &v[i]);
//	}
//
//	for (j = 0; j < n; j++) {
//		for (k = j; k < n; k++) {
//			if (v[j] > v[k]) {
//				aux = v[j];
//				v[j] = v[k];
//				v[k] = aux;
//			}
//		}
//	}
//
//	//interschimbare a 2 valori prin adunari, se poate folosi in bubble sort sau in for uri, ca sa nu mai folosim aux
//
//	//v[i] = v[i] + v[i + 1];
//	//v[i + 1] = v[i] - v[i + 1];
//	//v[i] = v[i] - v[i + 1];
//
//
//	//interschimbare a 2 valori cu operatii pe biti
//
//	//v[i] = v[i] ^ v[i + 1];
//	//v[i + 1] = v[i] ^ v[i + 1];
//	//v[i] = v[i] ^ v[i + 1];
//
//
//
//	for (i = 0; i < n; i++) {
//		printf("%d ", v[i]);
//
//		sum += v[i];
//	}
//
//	ma = (float)sum / n;
//
//	printf("\n%g ", ma);
//	return 0;
//}