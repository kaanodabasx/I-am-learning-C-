//
//  main.c
//  Öğrenci Not-Harf Sistemi
//
//  Created by Kaan Odabaş on 16.03.2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int midterm1,midterm2,final,ort;
    printf("1.midterm notunuzu giriniz: \n");
    scanf("%d",&midterm1);
    printf("2.midterm notunuzu giriniz: \n");
    scanf("%d",&midterm2);
    printf("final notunuzu giriniz: \n");
    scanf("%d",&final);

    ort = midterm1 * 30/100 + midterm2 * 30/100 + final * 40/100;
    
    if (ort >=50){
        if(ort > 60){
            if (ort>70){
                if (ort>80){
                    if (ort>90){
                        printf("Tebrikler AA aldınız ve ortalamanız: %d\n",ort);
                    }
                    else
                        printf("Tebrikler BA aldınız ve ortalamanız: %d\n",ort);
                }
                else
                    printf("Tebrikler BB aldınız ve ortalamanız: %d\n",ort);
            }
            else
                printf("Tebrikler CB aldınız ve ortalamanız: %d\n",ort);
        }
        else
            printf("Tebrikler CC aldınız ve ortalamanız: %d\n",ort);
    }
    else
        printf("Maalesef dersten kaldınız notunuz FF ortalamanız: %d\n",ort);
    return 0;
}
