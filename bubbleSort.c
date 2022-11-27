/*
Nama: Jeremy Edbert Widjaja
NIM :
Nama File:
Deskripsi:
Tanggal :
*/

#include <stdio.h>
void swap(int* a, int* b){
    /* Kamus Lokal */
    int temp;

    /* ALgoritma */
    temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int T[], int N){
    /* Kamus lokal */
    int i, j; // counter
    int k;
    int swapped;

    /* Algoritma */
    for(i = 0; i < N; i++){
        swapped = 0;
        for(j = 0; j < N-1; j++){
            if(T[j] > T[j+1]){
                swap(&T[j], &T[j+1]);
                swapped = 1;
            }
        }
        for(k = 0; k < N; k++){
            printf("%d ", T[k]);
        }
        printf("\n");
        if(swapped == 0){
            break;
        }
    }
}

int main(){
    // Kamus
    int k;
    int T[15] = {3,44,38,5,47,15,36,26,27,2,46,4,19,50,48};
    int N = 15;

    bubbleSort(T, N);
}
