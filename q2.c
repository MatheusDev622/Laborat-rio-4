#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void compute_frequency(int n, int m, int vetA[], int vetB[]) {
    for (int j = 0; j < m; j++) {
        int cont = 0;
        for (int i = 0; i < n; i++) {
            if (vetA[i] == vetB[j]) {
                cont++;
            }
        }
        vetB[j] = cont;
    }

    printf("Novo valor do vetor B:\n");
    for (int z = 0; z < m; z++) {
        printf("%d ", vetB[z]);
    }
    printf("\n");
}

int main() {
    int n = 8, m = 3;
    int vetA[n], vetB[m]; 

    srand(time(NULL));

    puts("Vetor A:");
    for (int i = 0; i < n; i++) {
        vetA[i] = rand() % 5;
        printf("%d ", vetA[i]);
    }
    printf("\n");

    puts("Vetor B:");
    for (int j = 0; j < m; j++) {
        vetB[j] = rand() % 5;
        printf("%d ", vetB[j]);
    }
    printf("\n");

    compute_frequency(n, m, vetA, vetB);    

    return 0;
}
