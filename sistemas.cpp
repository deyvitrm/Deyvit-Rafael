#include <stdio.h>
int main() {
    char c;
    printf("Ingrese un caracter: ");
    scanf(" %c", &c);
    if (c >= 'a' && c <= 'z') {
        c = c - 32;
    } else if (c >= 'A' && c <= 'Z') {
        c = c + 32;
    }
    printf("Resultado: %c\n", c);
    return 0;
}