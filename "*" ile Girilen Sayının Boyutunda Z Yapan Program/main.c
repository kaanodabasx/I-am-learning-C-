//
//  main.c
//  "*" ile Girilen Sayının Boyutunda Z Yapan Program
//
//  Created by Kaan Odabaş on 27.03.2023.
//

#include <stdio.h>
    /* print
    ex n=7
     *******
          *
         *
        *
       *
      *
     *******
     */


void first_last(int stars){
    int i;
    for ( i=1;i<=stars;i++) printf("*");
}
void middle_part(int spaces){
    int i;
    for (i=1;i<=spaces;i++) printf(" ");
    printf("*");
}
int main(int argc, const char * argv[]) {
    int n,spaces;
    printf("Enter n: \n");
    scanf("%d",&n);
    first_last(n);
    printf("\n");
    for ( spaces = n-2;spaces >= 1;spaces --){
        middle_part(spaces);
        printf("\n");
    }
    first_last(n);
    printf("\n");
}
