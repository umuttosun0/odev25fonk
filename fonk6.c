#include <stdio.h>
 
int usAlma(int, int);
 
int main() {
    int taban;
    int us ;
    int sonuc;
 
    printf("Tabaniniza girmek istediginiz sayiyi giriniz:");
    scanf("%d",&taban);
    printf("Ussunuze girmek istediginiz sayiyi giriniz:");
    scanf("%d",&us);
    sonuc = usAlma(taban, us);
 
    printf("Sonucunuz:(%d)^%d = %d\n", taban, us, sonuc);
    return 0;
}
 
int usAlma(int taban, int us) {
    if (us == 0)
        return 1;
    return taban * usAlma(taban, us - 1);
}