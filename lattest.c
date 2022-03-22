#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* int i,j; // variabel biasa
    int *p; // variabel pointer
    p = &i; // p = i
    *p = 5; // p = 5
    j = i; // j = i

    // p = i = j = 5
    printf("%d %d %d", i, j, *p);
    return 0;
    */
   //^^^^^^^-----------Pointer 1

   /*int nilai [3], *penunjuk;
   nilai[0] = 125;
   nilai[1] = 345;
   nilai[2] = 750;

   penunjuk = &nilai[0];

   printf("Nilai %i ada di alamat memori %p \n", *penunjuk, penunjuk);
   printf("Nilai %i ada di alamat memori %p \n", *(penunjuk+1), penunjuk+1);
   printf("Nilai %i ada di alamat memori %p \n", *(penunjuk+2), penunjuk+2);
   */
  //^^^^^^^------------pointer2
  /*int *p, a = 25, b;
  p = &a;
  b = *p;
  printf("Nilai a = %d di alamat memori %p \n", a, p);
  printf("Nilai b = %d di alamat memori %p \n", b, p);
  */
 int *p;
 p = (int *) malloc (sizeof(int));
 *p = 10;

 printf("%d \n", *p);
 free(p);
}