#include <stdio.h>

int main()
{
    int x = 10;
    char z;
    printf("Masukan character yang ingin dibuat : "); scanf(" %s", &z);
    printf("Masukan Angka yang ingin di cetak : "); scanf("%d", &x);
    for(int i = 0; i < x; i++)
    {
        for(int j = x; j > i; j--) 
        {
            printf("  ");
        }
        printf("o");
        for(int k = 0; k > i; k++ )
        {
            for(int l = k; l > i; i++)
            {
                printf(" ");
            }
            printf("o");
            printf("\n");
        }
        
    }
    for(int i = 0; i < x + 1; i++)
    {
        for(int j = x; j < i; j++) 
        {
            printf("  ");
        }
        printf("o");
        for(int k = 0; k < i; k--)
        {
            for(int l = k; l < i - 1; i++)
            {
                printf(" ");
            }
            printf("o");
            printf("\n");
        }
        
    }
    system("pause");
    return 0;
}