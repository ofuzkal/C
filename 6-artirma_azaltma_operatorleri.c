#include <stdio.h>
#include <stdlib.h>

/*Operatorler, variable'lar ve degerler uzerinde islem yapmak için kullnılır.
  Operator genelde iki degeri bir araya getirmek için kullanılsa da,
  Bir variable ile bir degeri veya bir variable ile başka bir variable'i 
  birlikte eklemek için kullanilabilir.
  
  Arithmetic Operators:
  + Ekleme Operatoru
  - Cikarma Operatoru
  * Carpma Operatoru 
  / Bolme Operatoru
  % Mod Alma Operatoru(Bir sayiyi bir sayiya boldugumuzde kalan.)
  ++ Arttırma Operatoru
  -- Eksiltme Operatoru
  Artirma yada eksiltme sağda olursa ilk once işlemini yap sonra artirir yada azaltiriz.*/

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
