#include<stdio.h>


int hesap(int k,float b){
    
   float hesap;
    hesap = k / (b*b);
    printf("vkiniz %f",hesap); 
   
}
int main(){

    int k;
    float b;
    

    printf("Boyunuzu giriniz:");
    scanf("%f",&b);
    printf("Kilonuzu giriniz:");
    scanf("%d",&k);
    
    hesap(k,b);





 
}

  









