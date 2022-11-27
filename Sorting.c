/*Nama File 	: Sorting.c*/
/*Deskripsi 	: Solusi*/
/*Pembuat   	: <diisikan Nim-Nama>*/
/*Tgl Pembuatan	: <diisikan tanggal dan jam>*/

#include <stdio.h> /*header file*/
void tukar(int* a, int* b){
    /*Kamus Lokal*/
    int temp;

    /*Algoritma*/
    temp = *b;
    *b = *a;
    *a = temp;
}

void printTabel(int a[], int N){
    /*Kamus Lokal*/
    int i;

    /*Algoritma*/
    for(i= 0; i < N; i++){
        printf(" %d", a[i]);
    }
}

void selectionSort(int T[], int N){
    /*Kamus Lokal*/
    int pass; //Counter Pass
    int i; //Counter
    int iMax; //Indeks nilai maksimal

    /*Algoritma*/
    for(pass = 0; pass < N - 1; pass++){
        iMax = pass;
        for(i = pass+1; i < N; i++){
            if(T[iMax] < T[i]){
                iMax = i;
            }
        }
        tukar(&T[iMax], &T[pass]);
    }
}

int main()
{ /*Kamus*/
    int i, j;
    int N  = 5;
    int sumChef1 = 0;
    int sumChef2 = 0;
    int chef1[N];
    int chef2[N];
    int input;

    for(i = 0; i < N; i++){
        printf("Masukkan nilai chef 1 dari juri ke-%d: ", i+1);
        scanf("%d", &input);
        while(input > 10 || input < 0){
            printf("Nilai harus 0 - 10!\n");
            printf("Masukkan nilai chef 1 dari juri ke-%d: ", i+1);
            scanf("%d", &input);
        }
        chef1[i] = input;
    }

    printf("\n");

    for(i = 0; i < N; i++){
        printf("Masukkan nilai chef 2 dari juri ke-%d: ", i+1);
        scanf("%d", &input);
        while(input > 10 || input < 0){
            printf("Nilai harus 0 - 10!\n");
            printf("Masukkan nilai chef 2 dari juri ke-%d: ", i+1);
            scanf("%d", &input);
        }
        chef2[i] = input;
    }

    printf("Nilai Chef 1: \n");
    printTabel(chef1, N);

    printf("\nNilai Chef 2: \n");
    printTabel(chef2, N);

    selectionSort(chef1, N);
    for(i = 0; i < 3; i++){
        sumChef1 = chef1[i] + sumChef1;
    }

    selectionSort(chef2, N);
    for(i = 0; i < 3; i++){
        sumChef2 = chef2[i] + sumChef2;
    }

    printf("\n");
    printf("\nNilai Chef 1 setelah diurutkan: \n");
    printTabel(chef1, N);
    printf("\nTotal 5 Nilai terbesar dari Chef 1: %d", sumChef1);

    printf("\n");
    printf("\nNilai Chef 2 setelah diurutkan: \n");
    printTabel(chef2, N);
    printf("\nTotal 5 Nilai terbesar dari Chef 2: %d", sumChef2);


    printf("\nHasil pertandingan: ");
    if(sumChef1 == sumChef2){
        printf("\nSeri !!!");
    }else if(sumChef1 > sumChef2 ){
        printf("\nChef 1 menang !!!");
    }else{
        printf("\nChef 2 menang !!!");
    }
    printf("\n");
    return 0;
}

