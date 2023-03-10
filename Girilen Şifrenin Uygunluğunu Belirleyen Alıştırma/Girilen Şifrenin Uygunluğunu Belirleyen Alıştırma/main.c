//
//  main.c
//  Girilen Şifrenin Uygunluğunu Belirleyen Alıştırma
//
//  Created by Kaan Odabaş on 10.03.2023.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>



int main(int argc, const char * argv[]) {
    printf("Lütfen  bir şifre oluşturunuz, şifreniz aşağıdaki kurallara uymalıdır;\n");
    printf("-Büyük ve küçük en az birer harf içermesi gerek.\n");
    printf("-En az bir tane rakam bulundurması gerek.\n");
    printf("-En az 8, en çok 16 karakter uzunluğunda olması gerek.\n");

    char password[100];
    int uzunluk,i,bharf,kharf,rakam;
    printf("Oluşturmak istediğiniz parolayı girin:  ");
    scanf("%s", password);
    int sonuc = 0;
    uzunluk = strlen(password);
    
        
        
        
    for (i=0; i<strlen(password); i++) {
        if (isupper(password[i])){
            bharf = 1;
        }
        if (islower(password[i])){
            kharf = 1;
        }
        if (isdigit(password[i])){
            rakam = 1;
        }
    }
    if (uzunluk>=8 && uzunluk<=16){
        if (kharf && bharf && rakam){
            printf("Şifre başarıyla oluşturuldu,şifreniz : %s\n",password);
            sonuc = 1;
        }
        else {
            printf("Şifreyi istenilen biçimde giriniz.\n");
        }
    }
    else {
        printf("Şifreyi istenilen uzunlukla giriniz.\n");
    }
}
        
    
    
    
    


    

