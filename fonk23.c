#include <stdio.h>
 
main()
{
    int eleman;
    int sayac = 1; 
    
    printf("Dizinin eleman sayisini giriniz: ");
    scanf("%d",&eleman);
    
    int dizi[eleman];
    
    for(int i = 0; i < eleman; i++)
    {
        printf("Dizinin %d. degerini giriniz: ",i+1);
        scanf("%d",&dizi[i]);
    }
    printf("\nDizinin tersten yazilmis hali.\n"); 
    
    for(int i = eleman-1; i >= 0; i--)
    {
        printf("Dizinin %d. degeri = %d\n",sayac, dizi[i]);
        sayac++;
    }
}