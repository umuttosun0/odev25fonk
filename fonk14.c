#include <stdio.h>

    int eb(int ,int,int );
    void main()
    {   
        int q,w,e;
        printf("3 adet tam sayi giriniz:\n");
        printf("Birinci sayiniz:\t");
        scanf("%d",&q);
        printf("Ikinci sayiniz:\t");
        scanf("%d",&w);
        printf("Ucuncu sayiniz:\t");
        scanf("%d" ,&e);
        printf("Girilen sayilarin en kucugu: %d\n", eb(q, w, e));
           
    }
    int eb(int x, int y, int z ){
         int ebs = x;
             if ( y < ebs )
                ebs = y;
             if ( z < ebs )
                ebs = z;
            return ebs;
}