#include <stdio.h>

typedef struct {
    int numero_pacote;
    int tempo;
} Elemento;

int bubble_sort(Elemento array[], int size) {
    int i, j, res = 0;
    Elemento assistant;

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - 1; j++) {
            if (array[j].numero_pacote > array[j + 1].numero_pacote) {

                res = res + (array[j].tempo + array[j + 1].tempo); // Faço a soma dos tempos de trocas

                // Troco de lugar os elementos
                assistant = array[j];
                array[j] = array[j + 1];
                array[j + 1] = assistant;
            }
        }
    } 

    return res;
}

int main() {
    int qtde_elementos, tempo_total;

    while (scanf("%d", &qtde_elementos) != EOF) {
        Elemento vetor_elementos[qtde_elementos];

        for (int i = 0; i < qtde_elementos; i++) 
            scanf("%d", &vetor_elementos[i].numero_pacote);

        for (int i = 0; i < qtde_elementos; i++) 
            scanf("%d", &vetor_elementos[i].tempo);

        tempo_total = bubble_sort(vetor_elementos, qtde_elementos);

        printf("%d\n", tempo_total);
    }

    return 0;
}