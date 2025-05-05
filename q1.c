#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int is_sublist(int n, int m, int vetA[],int vetB[]){
    if(m>n){
        return -1;
    }
    for(int i = 0;i<=n-m;i++){
        int j;
        for(j = 0;j<m;j++)
            if(vetA[i+j] != vetB[j]){
                break;
            
        }
        if(j==m){
            return i;
        }
    }
    return -1;
}
int main(){
    int n = 5,m = 3;
    int vetA[n],vetB[m];
    srand(time(NULL));
    puts("Vetor A: ");
    for(int i = 0;i<n;i++){
        vetA[i] = rand()%2;
        printf("%d ",vetA[i]);
    }
    printf("\n");

    puts("Vetor B:");
    for(int j = 0;j<m;j++){
        vetB[j] = rand()%2;
        printf("%d ",vetB[j]);
    }
    printf("\n");
    int check = is_sublist(n,m,vetA,vetB);
    if(check != -1){
        printf("O vetor B e sublista de A a partir da posição %d",check);
    }else{
        puts("O vetor B nao e sublista do vetor A!\n");
    }
    return 0;
}