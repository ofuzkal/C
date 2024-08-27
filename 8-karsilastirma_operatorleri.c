#include <stdio.h>
#include <stdlib.h>

/*Comparison Operators 
Karþýlaþtýrma operatorleri ya true(1) ya faulse(0)'dur
Eþittir(=) atama operatörüdür.Bizim bildiðimiz eþittir:== 
Eþit deðildir: !=

*/
int main() 
{
	int x, y;
	x=5;
	y=3;
	
	printf("sonuc x=y%d\n",  x==y);  /*sonuc x=y0*/
	printf("sonuc x!=y%d\n",  x!=y);/*sonuc x!=y1*/
	printf("sonuc x<y%d\n",  x<=y);/*sonuc x<y0*/
	printf("sonuc x>y%d\n",  x>=y);/*sonuc x>y1*/
	printf("\n\n");
	return 0;
}
