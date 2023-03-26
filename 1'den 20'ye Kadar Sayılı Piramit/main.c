//
//  main.c
//  1'den 20'ye Kadar Sayılı Piramit
//
//  Created by Kaan Odabaş on 24.03.2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x,y;
    for (x=1;x<21;x++){
        printf("%2d : ",x);
        for (y=1;y<=x;y++){
            printf("*");
        }
        printf("\n");
        }
}
