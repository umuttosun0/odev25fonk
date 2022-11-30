#include<stdio.h>
#include<math.h>

int hesaplama(int sayi){
int kenar;
int alan;
switch (sayi)
{
case 1:
    
    printf("kupun kenarini girin");
    scanf("%d",&kenar);

    alan= 6*kenar*kenar;

    printf("yuzey alani %d",alan);

   break;

default:

    break;
}

}



int main(){


int sayi;


    printf("Islemler\n1:kupun yuzey alanı\n2:kupun hacmi\n3:kupun ic kosegen uzunlugu\n\n\n");
    scanf("%d",&sayi);


    hesaplama(sayi);





    return 0;
}



 

