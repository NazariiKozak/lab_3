#include<stdio.h>
#include <stdlib.h>

#define n 5
void suma(int a[n][n]);
void bul(int a[n][n]);
int main(void) {
    int i, j/*, k*/;
    static int a[n][n];
    //system("cls");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("a[%d][%d] =", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("old array\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf ("%5d", a[i][j]);
        printf("\n");
    }
    bul(a);
    printf("\nnew array\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf ("%5d", a[i][j]);
        }
        printf("\n");
    }
    suma(a);
}
void bul(int a[ ][n]) {
    int i, k, j, c;
    for (i = 0; i < n; i++)
    {
        for (k = n - 1; k >= 0; k--)
        {
            for (j = 0; j < k; j++)
            {
                if (a[i][j] > a[i][j + 1])
                {
                    c = a[i][j];
                    a[i][j] = a[i][j + 1];
                    a[i][j + 1] = c;
                }
            }
        }
    }



}
void suma(int a[n][n])
{
    int i, j, N = 0;
    double d = 1, suma = 0;
    for (j = 0; j < 4; j++)
    {
        N = 0;
        suma = 0;

        for (i = 0; i < 5; i++)

        {
            if(i>j){

                suma += a[i][j];
                N++;

            }


        }
        printf("Suma= %lf  %d \n", suma/N, N);
        d *= suma/N;
    }
    printf("dob = %lf\n", d);
}
