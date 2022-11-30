#include<stdio.h>

void hatayibas(int hata){           

    printf("Hatali sayi girdiniz");

}

int main(){

    int sayi;
    printf("Negatif bir  sayi giriniz:");
    scanf("%d",&sayi);

    if ( sayi > 0 )
    {
        hatayibas(404);
        
    }
    else
    {
        printf("Girdiginiz sayiniz : %d",sayi);
    }
    
    

return 0;

}
