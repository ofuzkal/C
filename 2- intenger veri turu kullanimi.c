#include <stdio.h>
#include <stdlib.h>

/* Format Specifiers
% s= Metinsel ifadeleri(string) yazd�r�r .
sizeof hangi �l��ler oldu�unu s�yler*/
 /*
int main() 
{
	int formaNumaram = 10 ;
	
	printf(" int: %d", sizeof(int));   //bellekte kapladiklar� byte sayisina baktik
	return 0;
} */

/*Varible ayni tur olmak �art�yla aralar�na virgul koyularak yazilabilir.
Ayni turdeki variablelara ayni degeri verebiliyoruz.
Asaagidaki ornekde int kullandigimiz icin  %d kullaniyoruz.*/

int main ( ){
	int sayi, sayi1, toplama, cikarma, bolme, carpma;
	sayi = sayi1 =10;
	toplama = sayi + sayi1  ;
	cikarma = sayi - sayi1  ;
	carpma = sayi * sayi1  ;
	bolme = sayi / sayi1  ;
	
	printf("Toplama : %d\n", toplama);
	printf("Cikarma : %d\n", cikarma);
	printf("Bolme : %d\n", bolme);
	printf("Carpma : %d\n", carpma);
	
	return 0 ;
	
	
}

