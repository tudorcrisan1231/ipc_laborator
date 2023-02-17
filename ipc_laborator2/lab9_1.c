//Să se scrie un program în C care permite utilizatorului gestionarea unui magazin de legume.
//Legumele sunt caracterizate de : nume, cantitate, pret.Să se realizeze un meniu interactiv care :
//1. Cititeste o nouă legumă de la tastatură.Dacă se citește o legumă care există deja la aceasta i se
//va incrementa doar cantitatea si se va modifica pretul in cazul in care este diferit de cel initial.
//2. Afisarea legumelor din magazin
//3. Sa se transforme toate vocalele litere mici din nume in litere mari.
//4. Iesire
//Observatii : Meniul se va repeta ori de cate ori doreste utilizatorul.Nu se vor folosii variabile
//globale.Se va folosii cel putin o macroinstructiune.
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int calculate(int x) {
    if (x == 0) {
        return 1;
    }
    return 3 * calculate(x - 1) + 1;
}

int main() {
    int x;
    scanf("%d", &x);

    printd("%d", calculate(x));
    return 0;
}