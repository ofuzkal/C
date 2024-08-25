#include <stdio.h>
#include <stdlib.h>

/*Metinsel ifadeleri variable'a eklme.
 C'de str yerine char vardýr.
 C'de inenksele yaparken sifirdan baþlar.
 Fazladan verilen ifadelere null denir.
 ASCII kodalari bilgisayarda gorsel olarak gordugumuz
 karakter, harf veya rakamlarýn bilgisayar dilinde
 temsil edilme seklidir.Bellekte bu sekilde saklar.
 Char olmasýna ragmen sayisal degeri tek bir karakter 
 olarak yazdirir*/

int main() 
{
	char sayi = 111;
	printf("Karakterinizin ASCII degeri: %c\n", sayi);
	
	return 0;
}


