#include <stdio.h>
#include <stdlib.h>

/*Metinsel ifadeleri variable'a eklme.
 C'de str yerine char vard�r.
 C'de inenksele yaparken sifirdan ba�lar.
 Fazladan verilen ifadelere null denir.
 ASCII kodalari bilgisayarda gorsel olarak gordugumuz
 karakter, harf veya rakamlar�n bilgisayar dilinde
 temsil edilme seklidir.Bellekte bu sekilde saklar.
 Char olmas�na ragmen sayisal degeri tek bir karakter 
 olarak yazdirir*/

int main() 
{
	char sayi = 111;
	printf("Karakterinizin ASCII degeri: %c\n", sayi);
	
	return 0;
}


