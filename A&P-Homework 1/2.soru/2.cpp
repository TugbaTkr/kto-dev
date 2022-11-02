#include <stdio.h>

int main()
{
	int sayi, a, b, c; //integer sayı olarak tanımladım
	int c_karesi, son_islem ; // yapıcağım fonksiyonları tanımladım
	
	for (sayi=1; sayi<=100; sayi++){ //1 le 100 arasındaki sayıları alması gerektiğini belirrtim
	a = sayi*sayi; //ilk 100 doğal sayının karelerini ekrana yazdırdım
	printf("%d\n",a); // bulduğu sayıları ekrana yazdırdım
	(b+= a); // bulduğu sayıları topladı
	(c+= sayi); // sayıları topladı
	
	c_karesi = c*c; // toplam sonucunun karesini aldı
	son_islem = c_karesi-b; //ilk yüz doğal sayının kareleri toplamı ile toplamın karesi arasındaki farkı bulan işlem

	}
	printf("Karelerinin toplami = %d\n",b);// ilk 100 doğal sayının karelerinin toplamını ekranda gösterdim
	printf("Toplaminin karesi= %d\n",c_karesi); // ilk 100 doğal sayının toplamının karesi
	
	printf("Aralarindaki fark = %d \n", son_islem); // Kareleri toplamı ile toplamının karesi arasındaki fark
	
}

