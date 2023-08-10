//
//  main.c
//  İki boyutlu array oluşturup köşegenin değerlerini 1 yapmak
//
//  Created by Kaan Odabaş on 4.05.2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int ikiBoyutluDizi[10][10];
    int i,j;
    
    for (i=0;i<10;i++){
        for (j=0;j<10;j++){
            if (i==j){
                ikiBoyutluDizi[i][j]=1;
            }
            else {
                ikiBoyutluDizi[i][j]=0;
            }
        }
    }
    
    for (i=0;i<10;i++){
        for (j=0;j<10;j++){
            printf("%d  ",ikiBoyutluDizi[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}
