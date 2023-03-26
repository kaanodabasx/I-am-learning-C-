//
//  main.c
//  Tek Taraflı Piramit Yapma *fonksiyonsuz
//
//  Created by Kaan Odabaş on 20.03.2023.
//

#include <stdio.h>

// without the function

int main(){
    int i = 1;
    int j,n;
    const char ch = '^';
    printf("Lütfen basamak giriniz: ");
    scanf("%d",&n);
        while( i <= n ){
            j = 0;
            while( j < i ){
                printf( "%c", ch );
                j++;
            }
            printf( "\n" );
            i++;
        }
    }
 
