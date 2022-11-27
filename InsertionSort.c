/*
Nama: Robertus Agung Setiawan
NIM :
Nama File:
Deskripsi:
Tanggal :
*/

#include <stdio.h> //Header File

void InsertSort(int arr[], int N) {
    //kamus lokal
    int i, k, pass, temp;

    //algoritma
    for(pass= 1; pass < N; pass++){
        temp = arr[pass];
        i= pass - 1;

        while(temp  < arr[i] && i > 0){
            arr[i+1] = arr[i];
            i--;
        }

        if(temp >= arr[i]) {
            arr[i+1] = temp;
        }else {
            arr[i+1] = arr[i];
            arr[i] = temp;
        }
        for(k=0; k<N; k++){
            printf("%d ", arr[k]);
        }
        printf("\n");
    }
}

//Kamus Global
int main() { /*Program Utama*/

    /*Kamus Lokal*/
    int T[7] = {4,2,33,6,1,3,0};
    int i;

    /*Algoritma*/
    InsertSort(T, 7);

//    for(i=0; i<7; i++){
//        printf("%d ", T[i]);
//    }
    /*output*/
    return 0;
}
