//
//  main.c
//  Tek Taraflı Piramit Yapma
//
//  Created by Kaan Odabaş on 20.03.2023.
//

#include <stdio.h>
//with function

void piramit_yap(int k,char ch){
    int i=0;
    while (i < k){
        printf("%c", ch);
        i++;
    }
}
int main(){
    const char ch = '^';
    int n,i,j;
    printf("Basamak sayısı giriniz: "); scanf("%d",&n);
    i = 1;
    while (i<=n) {
        piramit_yap(i, ch);
        printf("\n");
        i++;
    }
}
