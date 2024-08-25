#include <stdio.h>
#include <stdlib.h>

/* Assigmen Operators
Operator   Example   Same As
  =         a = 5      a = 5
  +=        a+=5       a=a+5
  -=        a-=5       a=a-5 
  *=        a*=5       a=a*5
  /=        a/=5       a=a/5
  %=        a%=5       a=a%5
  &=        a&=5       a=a&5 //Bu iþaret "and" iþaretidir.Her iki koþulda saglanmalidir.
 
  |=        a|=5       a=a|5 //Bu iþaret "or" iþaretidir.Her iki koþuldan biri saglanmalidir.
  
  ^=        a^=5       a=a^5 //Bu iþaret "xor" iþaretidir.Her iki koþul ayný durumda olursa sýfýr.
                               Her iki koþul ayný durumda olmaz ise bir.
                                xor ornek: 1  1   0  , 1   0    1 ,  0   0   0 ,  0   1     1 .
 
  >>=       a>>=5      a=a>>5  rightshift Bitleri  sola iki kez kaydýrma yapar ve kayan yerler sifir olur.        
  <<=       a<<=5      a=a<<5  leftshift Bitleri  sola iki kez kaydýrma yapar ve kayan yerler sifir olur.
  */         

/*Kullanicidan 4 basamakli bir sayþ alip bu sayinin rakamlarini toplayan program yapalým*/
int main() 
{
	int sayi, bolum, kalan, toplam;
	toplam=0;
	
	
	printf("Lutfen 4 basamakli bir sayi giriniz:"); //ornek 9871 sayisini girelim
	scanf("%d", &sayi);
	
	//4. basamagi bul
	bolum=sayi / 1000;//9
	toplam += bolum; //0+9=9
	kalan=sayi % 1000; //871
	
	//3. basamagi bul
	bolum=kalan / 100;//8
	toplam += bolum; //9+8=17
	kalan=kalan % 100; //71
	
	//2. basamagi bul
	bolum=kalan / 10;//
	toplam += bolum; //17+7=24
	kalan=kalan % 10; //1
	
	//1. basamagi bul
	toplam +=kalan; //25
	
	printf("Girdiginiz sayinin rakamlarinin toplami: %d", toplam);
	
	
	return 0;
}
