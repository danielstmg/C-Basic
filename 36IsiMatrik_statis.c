/*Nama File 	: 36IsiMatrik_statis.c*/
/*Deskripsi 	: menampilkan matriks 2dimensi sesuai kondisi */
/*Pembuat   	: 24060120140051 - Daniel Sahat Parulian Situmeang*/
/*Tgl Pembuatan	: 22 Maret 2021*/

#include <stdio.h>/*header file*/
#include <stdlib.h>

/*Program Utama*/
int main(void)
{
    int M, N;

    printf("Masukkan nilai M: ");
    scanf("%d", &M);

    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    int arr[M][N];

    // Memasukkan nilai
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            // Jika index i dan j sama berarti berada di diagonal
            if (i == j)
            {
                arr[i][j] = 1;
            }
            else if (i > j)
            { // jika i > j berarti berada dibawah diagonal
                arr[i][j] = 2;
            }
            else
            { // diatas diagonal
                arr[i][j] = 0;
            }
        }
    }

    // mencetak matriks
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }
    return 0;
}
