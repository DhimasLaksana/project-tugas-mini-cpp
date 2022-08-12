// Contoh Program Sorting Bubble-Sort
// Chandra MDE, telinks.wordpress.com
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define jumlah_data 10

int data_angka[jumlah_data];
int i, j, t;

int main(void)
{
   // buat data secara acak
   srand(time(NULL));
   for (i=0; i<jumlah_data; i++)
      data_angka[i] = rand()%200;

   //tampilkan data_angka sebelum disortir
   printf("Data sebelum disortir...\n");
   printf("-----------------------------------------------------");
   for (i=0; i<jumlah_data; i++)
   {
      if (i % 10==0) printf("\n");
      printf("%5d", data_angka[i]);
   }

   //mari kita urutkan
   for (i=0; i<jumlah_data-1; i++)
   {
      for (j=i+1; j<jumlah_data; j++)
      {
         // < = ascending, > = descending
         if (data_angka[i] < data_angka[j])
         {
             t = data_angka[i];
             data_angka[i] = data_angka[j];
             data_angka[j] = t;
         }
     }

     //tampilkan hasil pada setiap step pengurutan
     printf("\n");
     for (t=0; t<jumlah_data; t++)
     {
         if (t % 10==0) printf("\n");
         printf("%5d", data_angka[t]);
     }
     printf("\n[ Hasil sorting perulangan ke-%2d ]-------------------", i+1);
   }

   //tampilkan data_angka setelah diurutkan
   printf("\n\nData setelah disortir...\n");
   printf("-----------------------------------------------------");
   for (i=0; i<jumlah_data; i++)
   {
     if (i % 10==0) printf("\n");
     printf("%5d", data_angka[i]);
   }
   printf("\n-----------------------------------------------------\n");
}
