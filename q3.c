#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int gerar_unicos(int n, int vetA[], int vetB[]) {
    int m = 0;
    for (int i = 0; i < n; i++) {
        int existe = 0;
        for (int j = 0; j < m; j++) {
            if (vetA[i] == vetB[j]) {
                existe = 1;
                break;
            }
        }
        if (!existe) {
            vetB[m++] = vetA[i];
        }
    }
    return m;
}

void compute_frequency(int n, int m, int vetA[], int vetB[], int freq[]) {
    for (int j = 0; j < m; j++) {
        int cont = 0;
        for (int i = 0; i < n; i++) {
            if (vetA[i] == vetB[j]) {
                cont++;
            }
        }
        freq[j] = cont;
    }
}
void print_frequency(int m,int vetB[],int freq[]){
    for (int i = 0; i < m; i++){
        printf("%d: ", vetB[i]);
        for (int j = 0; j < freq[i]; j++) {
            printf("*");
        }
        printf(" (%d)\n", freq[i]);
    }
}

int main() {
    int n = 10;
    int vetA[n];
    int vetB[n];
    int freq[n];

    srand(time(NULL));

    printf("Vetor A:\n");
    for (int i = 0; i < n; i++) {
        vetA[i] = rand() % 5;
        printf("%d ", vetA[i]);
    }
    printf("\n");

    int m = gerar_unicos(n, vetA, vetB);

    compute_frequency(n, m, vetA, vetB, freq);

    printf("\nFrequencia:\n");
    print_frequency(m,vetB,freq);
  

    return 0;
}
