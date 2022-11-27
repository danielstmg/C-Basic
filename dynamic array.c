/*Deskripsi	: array dengan dynamic alokasi memory*/

#include<stdio.h>
#include <stdlib.h>

int main(){
	int A[20]; /*array of integer*/
	int *P; /*P pointer ke integer*/
	int n, i; /*n = input, i =iterasi */
	printf("Masukan banyaknya alokasi memory, max(20): ");
	scanf("%d", &n);
	if (n <= 20){
		P = (int*)malloc(n*sizeof(int)); /*Alokasi memory sebanyak n elemen*/
		*P = A; /*assign A ke P*/
		
		/*input array*/
		printf("masukan elemen tabel sebanyak %d elemen: ",n);
		for(i=0; i<n; i++){
			scanf("%d", &A[i]);
		}
		
		printf("elemen tabel: ");
		/*output array*/
		for(i=0; i<n; i++){
			printf("%d ", A[i]);
		}	
	}
	else{
		printf("Alokasikan memory sebesar panjang array!\n");
	}
	
	free(P); //dealokasi memory setelah tidak digunakan
	return 0;
}
