#include <stdio.h>

void main() {
   int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
   int n, p;

   p = arr[0];
   
   for(n = 1; n < 10; n++) {
      if( p < arr[n] ) 
         p = arr[n];
   }
   
   printf("Largest element  is %d", p);
}