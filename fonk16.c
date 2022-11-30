#include <stdio.h>
 
void nothesapla()
{   
    int vize;
    float puan;
    int final;
    printf("Vize notunuz:");
    scanf("%d",&vize);
    printf("Final Notunuz:");
    scanf("%d",&final);
    puan = (vize * 0.6) + (final * 0.4);
    printf("Notunuz = %f\n",puan);
    
    if(puan > 60){
        printf("Dersi gectiniz.");
    }
    else if (puan > 50){
        printf("Dersi sorumlu gectiniz.");
    }
    else{
        printf("Dersten kaldiniz.");
    }
}
main()
{
    nothesapla();
}