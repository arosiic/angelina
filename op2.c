/* Napiši program koji:

Traži od korisnika da unese tri cela broja.

Ispisuje:

Koji je broj najveći, a koji najmanji (koristeći relacione i logičke operatore).

Da li su svi brojevi jednaki, dva jednaka, ili su svi različiti.

Na kraju, proverava da li je bar jedan broj paran i veći od 100 (koristeći logičke i aritmetičke operatore).

*/

#include <stdio.h>
int main() {
    int a, b, c;
    int max, min;;
    scanf("%d %d %d", &a, &b, &c);

    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);

    printf("\nNajveci broj: %d\n", max);
    printf("Najmanji broj: %d\n", min);
    if (a == b && b == c) {
        printf("\nSva tri broja su jednaka.\n");
    } else if (a == b || a == c || b == c) {
        printf("\nDva broja su jednaka.\n");
    } else {
        printf("\nSva tri broja su razlicita.\n");
    }

    if ( (a % 2 == 0 && a > 100) ||
         (b % 2 == 0 && b > 100) ||
         (c % 2 == 0 && c > 100) ) {
        printf("\nBar jedan broj je paran i veci od 100.\n");
    } else {
        printf("\nNijedan broj nije paran i veci od 100.\n");
    }

    return 0;
}
