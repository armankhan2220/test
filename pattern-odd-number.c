#include <stdio.h>
 int main()
 {
     int i,j ,r,n=1;
   printf("Enter the row size:");
   scanf("%d",&r);
   for(i = 0; i< r; i++) {
       for(j= r - 1; j > i; j--) {
           printf(" ");
       }
       for( j = 0; j < n; j++) {
           printf("%d",n);
       }
       n+=2;
       printf("\n");
   }
 }