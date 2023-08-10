//
//  main.c
//  DENEME
//
//  Created by Kaan Odabaş on 27.03.2023.
//

#include <stdio.h>

void first_lastZ(int stars){
    int i;
    for ( i=1;i<=stars;i++) printf("*");
}
void middle_partZ(int spaces){
    int i;
    for (i=1;i<=spaces;i++) printf(" ");
    printf("*");
}
void E1(int stars){
    int i,j;
    for(i = 1; i <= stars; i++) {
        for(j = 1; j <= stars; j++) {
            if(i == 1 || i == stars  || i == (stars / 2)+1)
                printf("*");
            else if(j == 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
int main(int argc, const char * argv[]) {
    int n,spaces;
    printf("Enter n: \n");
    scanf("%d",&n);
    first_lastZ(n);
    printf("\n");
    for ( spaces = n-2;spaces >= 1;spaces --){
        middle_partZ(spaces);
        printf("\n");
    }
    first_lastZ(n);
    printf("\n\n");
    

}


