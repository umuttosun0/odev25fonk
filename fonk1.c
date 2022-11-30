#include<stdio.h>

void hatayibas(int hata){           

    printf("Hatali sayi girdiniz %d ",hata);

}

int main(){

    int sayi;
    printf("Cift basamakli bir  sayi giriniz:");
    scanf("%d",&sayi);

    if ( sayi < 10 && sayi > -10)
    {
        hatayibas();
        
    }
    else
    {
        printf("Girdiginiz sayiniz : %d",sayi);
    }
    
    

return 0;

}
