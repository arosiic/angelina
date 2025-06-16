#include <stdio.h>

int main() {
    int a, b;
    char op;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf(" %c", &op);  

    switch(op) {
        case '+':
            printf("Rezultat: %d\n", a + b);
            break;
        case '-':
            printf("Rezultat: %d\n", a - b);
            break;
        case '*':
            printf("Rezultat: %d\n", a * b);
            break;
        case '/':
            if (b != 0)
                printf("Rezultat: %d\n", a / b);
            else
                printf("Greska: Deljenje nulom nije dozvoljeno\n");
            break;
        case '%':
            if (b != 0)
                printf("Rezultat: %d\n", a % b);
            else
                printf("Greska: Deljenje nulom nije dozvoljeno\n");
            break;
        default:
            printf("Nepoznat operator\n");
    }

    return 0;
}