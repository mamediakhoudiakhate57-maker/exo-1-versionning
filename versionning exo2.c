#include <stdio.h>

int main() {
    int a, b;
    int somme = 0;
    int difference = 0;

    printf("Entrez le premier entier : ");
    scanf("%d", &a);

    printf("Entrez le deuxieme entier : ");
    scanf("%d", &b);

    if (a > 0 && a % 2 == 0) {
        somme += a;
    }
    if (b > 0 && b % 2 == 0) {
        somme += b;
    }

    if (a < 0 && a % 2 != 0) {
        difference = a;
    }
    if (b < 0 && b % 2 != 0) {
        difference -= b;
    }


    printf("\n Somme des valeurs positives et paires : %d\n", somme);
    printf("Difference des valeurs negatives et impaires : %d\n", difference);

    if (b != 0) {
        float division = (float)a / b;
        printf("Division des deux valeurs : %.2f\n", division);
    } else {
        printf("Division impossible \n");
    }

    return 0;
}
