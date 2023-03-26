//
//  main.c
//  Alfabedeki Harfleri Sırayla Yazdıran Program
//
//  Created by Kaan Odabaş on 20.03.2023.
//

#include <stdio.h>


    void print_lowercase_letters(){
        char i = 'a';
        while (i <= 'z'){
            printf("%c ",i);
            i++;
        }
    }
    void print_uppercase_letters(){
        char i = 'A';
        while (i <= 'Z'){
            printf("%c ",i);
            i++;
        }
        printf("\n");
    }
int main(int argc, const char * argv[]) {
    print_lowercase_letters();
    printf( "\n" );
    print_uppercase_letters();
    
    
}
