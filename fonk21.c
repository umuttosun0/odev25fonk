#include <stdio.h>


int alttoplama(int x) {

	int toplam = 0;
	
	for(int i = 1; i <= x; i++){
			
	    toplam = i + toplam;

	}

	return toplam;
}

int main()
{
     
    int x;
   
 	printf("\nx degeri giriniz :\t"); 
	 
	scanf("%d",&x);
	
	int alttoplam = alttoplama(x);
	
	printf("\nx icin seri toplam: %d \n", alttoplam);
}