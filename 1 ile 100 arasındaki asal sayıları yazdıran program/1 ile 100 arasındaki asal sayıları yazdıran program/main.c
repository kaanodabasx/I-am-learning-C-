//
//  main.c
//  1 ile 100 arasındaki asal sayıları yazdıran program
//
//  Created by Kaan Odabaş on 15.03.2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

   int i, j, flag;
   
   printf("Asal sayilar 1 ve 100 arasinda:\n");
   
   printf("2 ");
   
   for(i=3; i<=100; i+=2) {
      flag = 1;
      
      for(j=2; j<=i/2; ++j) {
         if(i%j == 0) {
            flag = 0;
             break;
         }
      }
      
      if(flag == 1)
         printf("%d ", i);
   }
   
   return 0;
}

    
