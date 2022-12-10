#include <stdio.h>

int calcular_prejuizo(int *, int, int);

int main() {
    int qtde_obras, qtde_obras_danificadas;

    while (scanf("%d%d", &qtde_obras, &qtde_obras_danificadas) != EOF) {
        int vetor_obras[qtde_obras];

        for (int i = 0; i < qtde_obras; i++) {
            scanf("%d", &vetor_obras[i]);
        }

        printf("%d\n", calcular_prejuizo(vetor_obras, qtde_obras, qtde_obras_danificadas));
    }

    return 0;
}

int calcular_prejuizo(int *vetor, int tamanho_vetor, int qtde_obras_danificadas) {
    int prejuizo = 0;

    for (int i = tamanho_vetor - qtde_obras_danificadas; i < tamanho_vetor; i++)
        prejuizo = prejuizo + vetor[i];

    return prejuizo;
}