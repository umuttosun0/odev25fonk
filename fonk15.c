#include <stdio.h>
#define pi 3.14


float alan(float cap){
     float sonuc;
     sonuc = pi * cap * cap;
     return  sonuc;
}
float cevre(float cap){
     float sonuc;
     sonuc = 2 * pi * cap;
     return  sonuc;
}

int main(){
     int Yaricap,sec;

     printf("Dairenin yaricapini giriniz : ");
     scanf("%d",&Yaricap);
     printf("\nHangi islemi yapacaksiniz ? \n");
     printf("Daire alan bulma icin 1\nDaire cevre bulma icin 2\nSeciminiz : ");
     scanf("%d",&sec);

     if(sec == 1)
          printf("Dairenin alani : %f \n",alan(Yaricap));
     else if(sec == 2) 
          printf("Dairenin cevresi : %f", cevre(Yaricap));
     else
          printf("Yanlis secim yaptiniz.");
}