#include <stdio.h>

int main() {
    long int numero_portas;
    long int quadrado_perfeito;
    
    while (1) {
        scanf("%ld", &numero_portas);

        if (!numero_portas)
            break;

        for (long int i = 1; i * i <= numero_portas; i++) {
            quadrado_perfeito = i * i;

            if ((i+1) * (i+1) > numero_portas) 
                printf("%ld\n", quadrado_perfeito);
            else 
                printf("%ld ", quadrado_perfeito);
        }

    }

    return 0;
}