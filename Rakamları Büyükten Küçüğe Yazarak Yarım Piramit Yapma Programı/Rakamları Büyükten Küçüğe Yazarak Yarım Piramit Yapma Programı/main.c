//
//  main.c
//  Rakamları Büyükten Küçüğe Yazarak Yarım Piramit Yapma Programı
//
//  Created by Kaan Odabaş on 5.04.2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i=0,j,spaces=9;
    while (i <= 9){
        j=0;
        while (j<spaces){
            printf(" ");
            j++;
        }
        j=i;
        while (j>=0){
            printf("%d",j);
            j--;
        }
        i++;
        spaces--;
        
        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("\n");
    
    i=0;
    while (i<=9){
        j=9;
        while (j>=0){
            if (j<=i){
                printf("%d",j);
            }
            else {
                printf(" ");
            }
            j--;
        }
        i++;
        printf("\n");
    }
}



