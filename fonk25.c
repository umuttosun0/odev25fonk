#include <stdio.h>
#define pi 3.14


int hacimhesaplama(int yaricap,int yukseklik){

   float hacim;

   hacim = (pi*yaricap*yaricap*yukseklik)/3;
	printf("Koninin hacmi : %.2f",hacim);
}


int main(){

int yaricap,yukseklik;

printf("Koninin yaricapini giriniz : ");  
scanf("%d",&yaricap);
	 
printf("Koninin yuksekligini giriniz : ");
scanf("%d",&yukseklik);
	
hacimhesaplama(yaricap,yukseklik);

   return 0;
}