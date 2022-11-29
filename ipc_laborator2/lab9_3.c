#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h> //pt stringuri
#include<ctype.h> //pt functii ex toupper
#include <windows.h> //pt timp
void afisare(char cnp[14]) {
	printf("%s \n", cnp);
}

void cnp_gender(char cnp[14]) {
	int s = cnp[0] - '0'; 
	if (s % 2 == 0) {
		printf("Feminin \n");
	}
	else {
		printf("Masculin \n");
	}
}

void cnp_dataNastere(char cnp[14]) {
	int aa1 = cnp[1] - '0', aa2 = cnp[2] - '0', aa, an;
	char month[13][50] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	aa = aa1 * 10 + aa2; //an (ultimele 2 caractere)

	int ll1 = cnp[3] - '0', ll2 = cnp[4] - '0', ll;
	ll = ll1 * 10 + ll2; //luna

	int zz1 = cnp[5] - '0', zz2 = cnp[6] - '0', zz;
	zz = zz1 * 10 + zz2; //ziua

	if (aa >= 0 && aa <= 22) {
		if (aa >= 0 && aa <= 9) {
			an = 200 * 10 + aa;
		}
		else {
			an = 20 * 100 + aa;
		}
	}
	else {
		an = 19 * 100 + aa;
	}
	printf("%d %s %d \n",zz, month[ll-1], an);
}

void cnp_varsta(char cnp[14]) {
	int aa1 = cnp[1] - '0', aa2 = cnp[2] - '0', aa, an;
	SYSTEMTIME t;
	GetLocalTime(&t);

	int ll1 = cnp[3] - '0', ll2 = cnp[4] - '0', ll;
	ll = ll1 * 10 + ll2; //luna

	int zz1 = cnp[5] - '0', zz2 = cnp[6] - '0', zz;
	zz = zz1 * 10 + zz2; //ziua

	aa = aa1 * 10 + aa2; //an

	if (aa >= 0 && aa <= 22) {
		if (aa >= 0 && aa <= 9) {
			an = 200 * 10 + aa;
		}
		else {
			an = 20 * 100 + aa;
		}
	}
	else {
		an = 19 * 100 + aa;
	}

	if (t.wMonth < ll) {
		printf("%d ani\n", t.wYear - an - 1);
	}
	else if(t.wMonth == ll && zz > t.wDay) {
		printf("%d ani\n", t.wYear - an - 1);
	}
	else {
		printf("%d ani\n", t.wYear - an);
	}
}

void suma_cnp(char cnp[14]) {
	int i, s=0;

	for (i = 0; i < strlen(cnp); i++) {
		s += cnp[i] - '0';
	}
	printf("Baza 2: ");
	for (i = 31; i >= 0; i--) {
		if (((s >> i) & 1) == 0)
			printf("0");
		else
			printf("1");
	}
	printf("\n");
	
	printf("Baza 8: %#o \n", s);
	printf("Baza 10: %d \n", s);
	printf("Baza 16: %#X \n", s);
}

int validare_cnp(char cnp[14]) {
	int is_nr = 0, i;

	int s = cnp[0] - '0'; //primul caracter il transform in cifra(int);

	int ll1 = cnp[3] - '0', ll2 = cnp[4] - '0', ll; 
	ll = ll1 * 10 + ll2; //luna

	int zz1 = cnp[5] - '0', zz2 = cnp[6] - '0', zz;
	zz = zz1 * 10 + zz2; //ziua

	int jj1 = cnp[7] - '0', jj2 = cnp[8] - '0', jj;
	jj = jj1 * 10 + jj2; //judet/sector

	int nnn1 = cnp[9] - '0', nnn2 = cnp[10] - '0', nnn3 = cnp[11] - '0',nnn;
	nnn = (nnn1 * 10 + nnn2)*10 + nnn3;  // numarul secvential

	int c = cnp[12] - '0'; //componenta de control
	


	for (i = 0; i < strlen(cnp); i++) {  //verificare daca e compus numai din cifre;
		if (!(cnp[i] >= '0' && cnp[i] <= '9')) {
			is_nr = 1;
		}
	}
	
	if (strlen(cnp) == 13 && is_nr==0 && (s>=1 && s<=8) && (ll>=1 && ll<=12) && (zz >= 1 && zz <= 30) && (jj >= 1 && jj <= 48) && (nnn>=1 && nnn<=999) && (c >=1 && c<=9)) {
		return 1;
	}
	else {
		return 0;
	}
}
int main() {
	//problema CNP
	int opt;
	char cnp[14];
	do {
		scanf("%s", cnp);
	} while (validare_cnp(cnp)==0);

	while (1) {
		printf("0. Iesire \n");
		printf("1. Afișarea CNP-ului. \n");
		printf("2. Să se afișeze dacă CNP-ul citit este a unei persoane de sex masculin sau feminin \n");
		printf("3. Afișați data de naștere a persoanei. \n");
		printf("4. Afișați vârsta persoanei, calculată la data curentă. \n");
		printf("5. Să se calculeze suma cifrelor din CNP, apoi să se afișeze suma în baza 2, 8, 10 și 16. \n");

		printf("Dati optiune:");
		scanf("%d", &opt);

		if (opt == 0) {
			exit(1);
		}
		else if (opt == 1) {
			afisare(cnp);
		}
		else if (opt == 2) {
			cnp_gender(cnp);
		}
		else if (opt == 3) {
			cnp_dataNastere(cnp);
		}
		else if (opt == 4) {
			cnp_varsta(cnp);
		}
		else if (opt == 5) {
			suma_cnp(cnp);
		}
		else {
			printf("Optiune gresita! \n");
		}
	}
	return 0;
}