#include <stdio.h>
#include <stdlib.h>

/* Ciktinin printf oldugunu gormu�tuk.
Simdi ise girdi yani scanf'i , ampersant(&) ve algoritmalar� gorucegiz .
Scanf ile girdi i�lemlerinde variblemizin onune ampersant i�aretini kullaniyoruz.
C de nokta virg�l demektir.
const sabitlemedir.Constlar variablenizi degistiremez hale getiriyor.
Bir ornekle bunu orenelim: Dairenin cevre ve alanini bul.*/

int main() {
/*	Dairenin cevresini ve alanini bulan bir algoritma:
    1. �htiyac�m�z olan variableimizi bul ve tanimla
    2.variablesin typen� bul.
    3.form�l� tan�mla > alan=pi*r*r >cevre=2*pi*r
    4.kullanicidan verileri al.
    5.Islem yap
    6.Cikti ver.
	*/
	
	float r, cevre, alan;
	const PI = 3.14;
	
	printf("Lutfen dairenin yaricapini giriniz:");
	scanf("%f", &r);
	
	cevre = 2*PI*r;
	alan =  PI*r*r ;
	
	printf("Dairenizin cevresi: %f\n", cevre);
	printf("Dairenizin alani : %f ", alan);
	
	return 0;
}
