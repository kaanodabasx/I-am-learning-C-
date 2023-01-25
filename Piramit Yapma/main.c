//
//  main.c
//  ccccc
//
//  Created by Kaan Odabaş on 23.01.2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int limit,i,j,önlimit;
    printf("sayı gir:\n");
    scanf("%d",&önlimit);
    limit=2*önlimit;
    for (i=1;i<=limit;i+=2){
        for (j=0;j<(limit-i)/2;j++){
            printf(" ");
        }
        for (j=0;j<i;j++){
            printf("*");
        }
        for (j=0;j<(limit-i)/2;j++){
            printf(" ");
        }
        printf("\n");
    }
}
