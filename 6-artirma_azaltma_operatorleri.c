#include <stdio.h>
#include <stdlib.h>

/*Operatorler, variable'lar ve degerler uzerinde islem yapmak i�in kulln�l�r.
  Operator genelde iki degeri bir araya getirmek i�in kullan�lsa da,
  nir variable ile bir degeri veya bir variable ile ba�ka bir variable'i 
  birlikte eklemek i�in kullanilabilir.
  
  Arithmetic Operators:
  + Ekleme Operatoru
  - Cikarma Operatoru
  * Carpma Operatoru 
  / Bolme Operatoru
  % Mod Alma Operatoru(Bir sayiyi bir sayiya boldugumuzde kalan.)
  ++ Artt�rma Operatoru
  -- Eksiltme Operatoru
  Artirma yada eksiltme sa�da olursa ilk once i�lemini yap sonra artirir yada azaltiriz.*/

int main() 
{
	int a, b, c;
	
	a=1;
	b=2;
	c=3;
	
	a++;
	++b;
	c--;
	a=--b;
	a=b++;
	c=a--;
	b=++c;
	
	printf("a:%d\n" , a);
	printf("b:%d\n" , b);
	printf("c:%d\n" , c);
	
	
	
	return 0;
}
