#include<stdio.h>

int malzeme(int malzeme){           


   printf("1:Mantarli\n2:Sucuklu\n3:Kasarli\n4:Karisik sebzeli\n\n\nSecim icin istediginiz malzemeyi tuslayiniz:\t");
    scanf("%d",&malzeme);
switch (malzeme)
{
case 1:
    printf("Mantarli ");
    break;

case 2:
    printf("Sucuklu ");
    break;

case 3:
    printf("Kaşarlı ");
    break;

case 4:
    printf("Karışık sebzeli ");
    break;

default:
    break;
}


return 0;
}

int main(){

int sayi;
    printf("Pizza malzemelerini gormek icin 1'e basiniz: ");
    scanf("%c",&sayi);

    printf("pizzaniz hazirlaniyor",malzeme(sayi));
return 0;

}
