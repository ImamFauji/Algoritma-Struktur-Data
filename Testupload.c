#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 

/*void main ()
{
  char huruf[5] = {'a','i','u','e','o'};
  printf("Huruf : %c\n", huruf[3]);
}
*/
/*
struct Mahasiswa 
{
 char *name;
 char *alamat;
 int umur;
};

void main()
{
    // menggunakan struct
    struct Mahasiswa mhs1, mhs2;

    // mengisi nilai ke struct
    mhs1.name = "Imam";
    mhs1.alamat = "Salatiga";
    mhs1.umur = 20;

    mhs2.name = "Erik";
    mhs2.alamat = "Getasan";
    mhs2.umur = 19;

    // mencetak isi struct
    printf("## Mahasiswa 1 ##\n");
    printf("Nama: %s\n", mhs1.name);
    printf("Alamat: %s\n", mhs1.alamat);
    printf("Umur: %d\n", mhs1.umur);

    printf("## Mahasiswa 2 ##\n");
    printf("Nama: %s\n", mhs2.name);
    printf("Alamat: %s\n", mhs2.alamat);
    printf("Umur: %d\n", mhs2.umur);
}
*/
struct NILAI
{
    int nim;
    int nilaikuis;
    int nilaiTTS;
    int nilaiTAS;
};


void main() 
{
    int total;
    struct NILAI NIM, NILAITTS, NILAITAS, NILAIKUIS;
    
    printf("masukan nim : "); scanf("%d", NIM);
    printf("masukan nilai KUIS : "); scanf("%d", NILAIKUIS);
    printf("masukan nilai TTS : "); scanf("%d", NILAITTS);
    printf("masukan TAS : "); scanf("%d", NILAITAS);

    NIM.nim;
    NILAITTS.nilaiTTS;
    NILAITAS.nilaiTAS;

    total = ((NIM.nim+NILAITTS.nilaiTTS+NILAITAS.nilaiTAS)/3);

    if(total < 70 && total <= 100)
    {
        printf("---------------------------------\n");
        printf("%d\n", &NIM);
        printf("Selamat anda mendapat nilai A \n");
        printf("---------------------------------\n");
    }
    else if(total < 45 || total <= 70)
    {
        printf("---------------------------------\n");
        printf("%d\n", &NIM);
        printf("Selamat anda mendapat nilai C \n");
        printf("---------------------------------\n");
    }
    else if(total < 0 || total <= 45) 
    {   printf("---------------------------------\n");
        printf("%d\n", &NIM);
        printf("Sayang anda mendapat nilai E \n");
        printf("---------------------------------\n");
    }
    else 
    {
        printf("NIM : 672021039 \n");
        printf("Selamat anda mendapat nilai A \n");
    }
    system("pause");
    printf("NIm : %d", NIM);
    printf("Total Nilai : %d", &total);
}
