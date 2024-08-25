#include <stdio.h>
#include <stdlib.h>

/*girdifonksiyonu_algoritma'nin devami

 4 adet sayi alip bunlarin karesini ve kupunu alan program.
 6 asamali bir algoritma hazirliyoruz:
 1. Ihtiyacimiz olan variables bul ve tanimla
 2. Variables type bul.
 3. Formulu tanimla >kare=sayi1*sayi2  >küp=sayi1*sayi2*sayi3
 4. Kullanicidan verileri al.
 5. Islem yap.
 6. Cikti ver. */

int main () {

float  sayi, sayi1, sayi2, sayi3;
       
	   sayi  = 0.0;  /*Baskangýçta bu degerleri sifira esitledik.*/
	   sayi1 = 0.0;
	   sayi2 = 0.0;     
	   sayi3 = 0.0;
	   
	   printf("Lutfen dort adet sayi giriniz :"); /*Kullanicidan sayi istedik*/
	   scanf("%f %f %f %f", &sayi, &sayi1, &sayi2, &sayi3);
	   
	   printf("Sayi\t\t");     /*Uc adet basligi yanyana olusturduk.*/              
	   printf("Sayinin Karesi\t\t"); /*\tyi kullanarak bir sekme kadar bosluk birakiyoruz*/
	   printf("Sayinin Kupu\t\t\n");
	   
       printf("------------\t\t");  /*Guzel bir gorunum icin cizgiler olusturuyoruz*/
       printf("------------\t\t\t");
       printf("------------\t\t\n");
	 
	   printf("%f\t\t", sayi);
	   printf("%f\t\t\t", sayi*sayi);
	   printf("%f\t\t\n", sayi*sayi*sayi);
	  
	   printf("%f\t\t", sayi1);
	   printf("%f\t\t\t", sayi1*sayi1);
	   printf("%f\t\t\n", sayi1*sayi1*sayi1);
	  
	   printf("%f\t\t", sayi2);
	   printf("%f\t\t\t", sayi2*sayi2);
	   printf("%f\t\t\n", sayi2*sayi2*sayi2);
	  
	   printf("%f\t\t", sayi3);
	   printf("%f\t\t\t", sayi3*sayi3);
	   printf("%f\t\t\n", sayi3*sayi3*sayi3);
	   
	   printf("\n\n");


	return 0;
}
