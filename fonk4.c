#include <stdio.h>



int faktoriyel(int n){

int i;
int fact = 1;

for(i = n; i > 0; i--){

   fact *= i;
}

}

int main(){


int sayi;

printf("Faktoriyelini istediginiz sayiyi giriniz:");
scanf("%d",&sayi);

printf("Girdiginiz sayinin faktoriyeli:%d",faktoriyel(sayi));
}