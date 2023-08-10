//
//  main.c
//  Bir stringteki istenmeyen bir harfi istenilen harfle değiştiren program
//
//  Created by Kaan Odabaş on 12.05.2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char str1[50],çıkarılacakharf,istenilenharf;
    int i,uzunluk;
    printf("Lütfen string bir ifade giriniz: \n");
    scanf("%s",str1);
    printf("Lütfen çıkarmak istediğiniz harfi giriniz: \n");
    getchar();
    scanf("%c",&çıkarılacakharf);
    printf("Lütfen yerine koymak istediğiniz harfi giriniz: \n");
    getchar(); 
    scanf("%c",&istenilenharf);
    
    for (i=0;str1[i]!='\0';i++);
        uzunluk = i;
    
    for (i=0;i<uzunluk;i++){
        if (str1[i] == çıkarılacakharf){
            str1[i] = istenilenharf;
        }
        else {
            continue;
        }
    }
    printf("%s \n",str1);
}

