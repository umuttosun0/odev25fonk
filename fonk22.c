#include <stdio.h>
 
void asal_Sayilar(int sayi1, int sayi2)
{
    int sayac;
    for(int i = sayi1; i < sayi2; i++)
    {
        sayac = 0;
        for(int j = 2; j < i; j++)
        {
            if(i % j == 0){
                sayac++;
            }
        }
        if(sayac == 0){
            printf("%d sayisi asal bir sayidir.\n",i);
        }
    }
}
 
int main()
{
    int sayi1,sayi2;
    
    printf("1.Sayiyi giriniz: ");
    scanf("%d",&sayi1);
    printf("2.Sayiyi giriniz: ");
    scanf("%d",&sayi2);
    
    asal_Sayilar(sayi1,sayi2);
}
