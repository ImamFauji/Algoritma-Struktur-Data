#include <stdio.h>
#include <stdlib.h>
//Tugas Program Sorting
//Nama  : Imam Fauji Sugiarta
//NIN   : 672021039
//Kelas : TC122F

int array[100], array2[100], size;

void tukar(int *a, int *b)
{
    int sementara = *a;
    *a = *b;
    *b = sementara;
}

void input()
{
    system("cls");
    printf("Masukan jumlah data = ");
    scanf("%d", &size);
    for(int i = 0; i < size; i++)
    {
        printf("Masukan data ke -%d =", (i+1));
        scanf("%d", &array[i]);
        array2[i] = array[i];
    }
    printf("\n");
    system("pause");
    main();
}

void bubble_sort()
{
    system("cls");
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - i - 1; j++)
        {
            if(array[j]>array[j+1])
            {
                tukar(&array[j], &array[j+1]);
            }
        }
    }
    printf("Bubble sort selesai \n");
    system("pause");
    main();
}

void selection_sort()
{
    system("cls");
    for(int i = 0; i < size-1; i++)
    {
        int min_index = i;
        for(int j = i + 1; j < size; j++)
        {
            if(array[j] < array[min_index])
            {
                min_index = j;
            }
            tukar(&array[min_index], &array[i]);
        }
    
    }
    printf("Proses selection sort telah selesai!\n");
    system("Pause");
    main();
}

void insertion_sort()
{
    system("cls");
    int temp, i, j;
    for(i = 1; i < size; i++)
    {
        temp = array [i];
        j = 1-1;
        while(array[j] > temp && j >= 0)
        {
            array[j+1] = array [j];
            j--;
        }
        array[j+1]=temp;
    }
    printf("insertion sort selesai!\n");
    system("pause");
    main();
}

void tampil ()
{ 
    system("cls");
    printf("Angka Ascending : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d", array[i]);
    }
    printf("\n");
    system("pause");
    main();
}

void exchange_sort()
{
    system("cls");
    for(int i = 0; i < size-1; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(array[j] < array[i])
            {
                tukar(&array[j], &array[i]);
            }
        }
    }
    printf("Proses exchange sort telah selesai!\n");
    system("pause");
    main();
}

int main ()
{
    system("cls");
    int pil;
        system("cls");
        printf("1. Masukan Data\n");
        printf("2. Bubble Sort\n");
        printf("3. Exchange Sort\n");
        printf("4. Selection Sort\n");
        printf("5. Insertion Sort\n");
        printf("6. Tampilkan Data\n");
        printf("7. Exit\n");
        printf("Pilihan = "); scanf("%d", &pil);
        switch (pil)
        {
        case 1 : input(); break;
        case 2 : bubble_sort(); break;
        case 3 : exchange_sort(); break;
        case 4 : selection_sort(); break;
        case 5 : insertion_sort(); break;
        case 6 : tampil(); break;
        
        }
        if(pil < 1 || pil > 7)
        {
            main();
        }
}