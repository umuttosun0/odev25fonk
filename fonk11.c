#include<stdio.h>

int main(){

    int sayi;
    printf("Indirmek istediginiz oyunu secin\n1: GTA V\t90 GB\n2: RDR 2\t120 GB\n3: NBA 2k23\t140 GB\n\n\n");
    scanf("%d",&sayi);

    printf(hesap(sayi));

}


int hesap(int islem){

int hafiza= 130;
int tutar;

  switch (islem)
{



   case 1:
       printf("GTA V indirilmeye baslamistir\n");
        
        hafiza -=90;
        printf("Kalan hafizaniz:%d\n",hafiza); 
         
    
    break;

    case 2:
      
    printf("RDR 2 indirilmeye baslamistir\n");

        hafiza -=120;
   
     printf("Kalan hafizaniz:%d\n",hafiza);
    
    
    break;

    case 3:

    printf("NBA 2k23 indirilemiyor.Lutfen hafizada yer aciniz.\n");

    hafiza = 140 -hafiza;

    printf("Gerekli olan hafiza miktari:\t %d",hafiza);

    break;
}

}