#include <stdio.h>

void donem(int girilenyas){
     if(girilenyas >= 0 && girilenyas < 18){
          printf("Cocuksunuz.");
     }
     else if(girilenyas >= 18 && girilenyas < 30){
          printf("Gencsiniz.");
     }
     else if(girilenyas >= 30 && girilenyas < 55){
          printf("Yetiskinsiniz.");
     }
     else if(girilenyas >= 55 && girilenyas < 120){
          printf("Yaslisiniz.");
     }
     else{
          printf("Hatali giris yaptiniz.");
     }
}

int main(){
     int yas;

     printf("Lutfen yasinizi giriniz: ");
     scanf("%d",&yas);
     donem(yas); 
}