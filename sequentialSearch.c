/*
Nama: Robertus Agung Setiawan
NIM :
Nama File:
Deskripsi:
Tanggal :
*/

#include <stdio.h> //Header File
//Kamus Global

int main()   /*Program Utama*/
{

    /*Kamus Lokal*/
    int T[10] = {1,2,3,4,9,10};
    int Found;
    int IX;

    /*Algoritma*/
    //seqSearchX1(T,6,9,&IX);
    //seqSearchX2(&T, 6, 10, &IX);
    //printf("indeks dari elemen 10 di tabel T adalah: %d\n", IX);
    //seqSearchX1a(T, 6, &Found,99);
    //printf("Apakah 2 ada pada tabel T?");
    //if(Found == 1)
    //{
    //    printf("True");
    //}
    //else
    //{
    //    printf("False");
    //}

//    printf("prosedur seqSearchX2\n");
//    seqSearchX2(T, 6, 11, &IX, &Found);
//    printf("Apakah 11 ada pada tabel T? ");
//    if(Found == 1)
//    {
//        printf("True, indeksnya adalah %d", IX);
//    }
//    else
//    {
//        printf("False");
//    }
    printf("Prosedur search with sentinel\n");
    seqSearchWithSentinel(T, 6, 10, &IX);
    printf("Indeks elemen 11 pada tabel T adalah %d\n", IX);

    /*output*/

    return 0;
}

void seqSearchWithSentinel(int T[], int N, int X, int*IX){
    /*kamus lokal*/
    int i;

    /*algoritma*/
    T[N] = X;
    i=0;
    while(T[i] != X){
        i++;
    }

    if(i < N){
        *IX = i;
    }
    else{
        *IX = -1;
    }
}

void seqSearchX2(int T[], int N, int X, int *IX, int* Found){
    /*kamus lokal*/
    int i;

    /*algoritma*/
    *Found = 0;
    i = 0;
    while(i < N && *Found == 0){
        if(T[i] == X){
            *Found = 1;
        }
        else{
            i++;
        }
    }

    if(*Found == 1){
        *IX = i;
    }else{
        *IX = -1;
    }
}

void seqSearchX1a(int T[], int N, int *Found, int X)
{
    /*kamus lokal*/
    int i;

    /*algoritma*/
    i = 0;
    while(i<N && T[i] != X)
    {
        i++;
    }
    *Found = (T[i] == X);
}

void seqSearchX1(int arr[], int N, int X, int* IX)
{
    /*kamus lokal*/
    int i;

    /*algoritma*/
    i = 0;
    while(i < N && arr[i] != X)
    {
        i++;
    }
    if(arr[i] == X)
    {
        *IX = i;
    }
    else
    {
        *IX = -1;
    }

}

