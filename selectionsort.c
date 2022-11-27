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

void selectionSort(int T[], int N){
    /* Kamus lokal */
    int i, j; // counter
    int k;
    int temp;
    int idxmin;

    /* Algoritma */
    for(i = 0; i < N; i++){
        idxmin = i;
        for(j = i; j < N; j++){
            if(T[j] < T[idxmin]){
                idxmin = j;
            }
        }
        temp = T[i];
        T[i] = T[idxmin];
        T[idxmin] = temp;
        for(k = 0; k < N; k++){
            printf("%d ", T[k]);
        }
        printf("\n");
    }
}

int main(){
    // Kamus
    int k;
    int T[15] = {3,44,38,5,47,15,36,26,27,2,46,4,19,50,48};
    int N = 15;

    selectionSort(T, N);
}
