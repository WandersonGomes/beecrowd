#include <stdio.h>

int main() {
    int valor = 0;
    int numero = 0;
    int soma = 0;
    int divisor = 0;

    scanf("%d", &valor);

    for (int i = 0; i < valor; i++) {
        scanf("%d", &numero);
        soma = 0;
        for (int j = 1; j <= numero / 2; j++) {
            if (numero % j == 0) {
                divisor = j;
            } else {
                divisor = 0;
            }
            soma = soma + divisor;
        }
        if (soma == numero) {
            printf("%d eh perfeito\n", numero);
        } else {
            printf("%d nao eh perfeito\n", numero);
        }
    }

    return 0;
}