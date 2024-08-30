#include <stdio.h>
#include <stdlib.h>

/* Logical Operators//Mantiksal Operatorler
 &&=ve=Koşullarin tümü olmalı.Saglanmak zorunda eger saglaniyorsa true yani 1 donecek.*/

int main() 
{
	int x,y;
	x=6;
	y=2;
	printf("Sonuc:%d\n",(x>2 && y<x)); /*Sonucu 1 verir. iki sart saglaniyor*/
	
	return 0;
} 
 
 
/* ||=veya=Kosullardan biri saglansa yeter.Biri saglanması sonucunda 1 doner. */
int main() 
{
	int x,y;
	x=6;
	y=2;
	printf("Sonuc:%d\n",(x>7 || y<x)); /*Sonucu 1 verir.Tek sart yeterlidir.*/
	
	return 0;
}
 
 
/* !=Degil=sonucu tersine cevirir.Sonuc dogruysa yanlıs dondurur.Belli bir kosulun 
   olmadıgı durumda kullanilir.
  */
 int main() 
{
	int x,y;
	x=6;
	
	printf("Sonuc:%d\n",!(x>5 && x<10)); /*5<x<10 bu araligi kabul etme demek.
	                                      parantez içi 1 donecek ama 1'in degili 0 oldugundan ötürü
										  sonuc 0'dir*/
	                                        
	
	return 0; 
