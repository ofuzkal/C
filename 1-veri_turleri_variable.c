
/*
Escape Sequences
\n=Yeni satir ekler.
\b=Backspace tusunun islevini gerçeklestirir.
\t=Bir sekme bosluk birakir.
\"==Cift tirnak isareti basar.
\\=Backslash iki tane kullanildiginda ekrana cikar.*/


 /*  Variable/Degiskenler= Programdaki verileri bellekte tutmamiza saglar.
 C Variables
 Bir harf veya alt cizgi ile baslar.
 Isimler harf, rakam ve alt cizgi icerebilir.
 Adlar buyuk/kucuk harfe duyarlidir.
 Adlar bosluk veya ozel karakter(!,#,%, vb.) icermez.
 C'nin kendisi icin ozel anlamlari olan ifadeleri variale olarak kullanamazsiniz
 
 C Data Types
 char=1 byte, tek bir karakter/harf/sayi veya ASCII degerlerini saklar.
 int=4 bytes, tum tam sayilar.
 float=4 bytes, bir veya daha fazla ondalik iceren kesirli sayilari saklar.7 basamak iÃ§in yeterli.
 double=8 bytes, bir veya daha fazla ondalik iceren kesirli sayilari saklar.16 basamak icin yeterli.
 
 Format Specifiers
 %c = char veri tipini yazdirir.
 %d = int veri tipini yazdirir.
 %ld = Long int veri tipini yazdirir.Long int, int ve unsigned verilerinden 
 daha buyuk sayilari yazdirmak icin kullanilalabilir.
 %f = float veri tipini yazdirir.
 %s = Metinsel ifadeleri yazdirir.
 %u = Unsigned int veri tipini yazdirir.Normal int daha buyuk sayiyi ifade eder.
 %lf = Double veri turunu yazdirir.*/
 
 
 
int main() 
{   
	char tukenmezKalem = 't';
	int formaNumaram = 10 ;
	float piSayisi = 3.14 ;
	double piSayisi2 = 3.14159265358 ;
	
	
	/*Yazdirma asamasi*/
	printf("%c\n", tukenmezKalem);
	printf("%d\n", formaNumaram);
	printf("%f\n", piSayisi);
	printf("lf\n", piSayisi2);
	
	return 0;
}
