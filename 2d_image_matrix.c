#include <stdio.h>

#include <stdlib.h>

#include<string.h>

#include<conio.h>

int main() {
   int m[50][50];
   int n;
   int l = 0, k = 0;
   scanf("%d", & n);

   for (int z = 0; z < n; z++) {

      for (int s = 0; s < n; s++) {

         scanf("%d", & m[z][s]);
      }
   }

   //
   while (l < n - 1 || k < n - 1) {

      if (m[l + 1][k] == 1) {

         l++;

      } else if (m[l][k + 1] == 1) {
         k++;

      } else {
         printf("cant traced\n");
         exit(0);
      }

   }

   l = 0;
   k = 0;
   //p
   printf("(0,0)-->");
   while (l < n || k < n) {

      if (m[l + 1][k] == 1) {

         l++;
         printf("(%d,%d)", l, k);
      } else if (m[l][k + 1] == 1) {
         k++;
         printf("(%d,%d)", l, k);

      } else {
         exit(0);
      }
      if (l != n - 1 || k != n - 1) {
         printf("-->");
      }

   }

   return 0;

}
