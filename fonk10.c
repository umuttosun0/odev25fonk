#include<stdio.h>

int main(){

    int sayi;
    printf("Yapmak istediginiz islemi tuslayiniz\n1:Para cekme\n2:Para yatirma\n\n\n");
    scanf("%d",&sayi);

    printf("Kartinizi almayi unutmayin",hesap(sayi));

}


int hesap(int islem){

int bakiye= 1000;
int tutar;

  switch (islem)
{



   case 1:
       printf("Gireceginiz tutari giriniz:\t");
       scanf("%d",&tutar);
        bakiye -=tutar;
        printf("Kalan bakiyeniz:%d\n", bakiye); 
         if (tutar>1000){
            printf ("Bakiye yetersiz");
        }
    
    break;

    case 2:
      
    printf("Gireceginiz tutari giriniz:\t");
    scanf("%d",&tutar);
    bakiye += tutar;
   
     printf("Yeni bakiyeniz:%d\n",bakiye);
    
    
    break;


}
}