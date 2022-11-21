////a) Şterge dintr - un şir de caractere un subşir specificat prin poziţie şi lungime.
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h> //pt stringuri
//#include<ctype.h> //pt functii ex toupper
//
//int main() {
//	
//	char s[101],t[101];
//	int ok = 0,i=0,j=0, poz, lung;
//	
//	gets(s);
//
//	scanf("%d", &poz);
//	scanf("%d", &lung);
//	
//	for (i = 0; i < strlen(s); i++) {
//		if (i<poz || i>=(poz + lung)) {
//			t[j] = s[i];
//			j++;
//			//printf("%c", s[i]);
//		}
//	}
//	
//	
//	for(i=0;i<strlen(s)-lung;i++)
//		printf("%c", t[i]);
//
//	return 0;
//}