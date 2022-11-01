#include <stdio.h>
int i,a,b; 

fonk(int a){
		for(i=0;i<a;i++){ //0 dan başlayarak sayması için for döngüsü açtım
		if (i%3==0){ // 3 e tam bölünme koşulunu verdim
		b=b+i; // bulduğu sayıları topladı
	}
		else if(i%5==0){ // 5e tam bölünme koşulunu verdim
		b=b+i; // bulduğu sayıları topladı
	}
}
printf("%d",b); 
}
int main(){ 
printf("deger giriniz"); //sınırı belirlemek için değer girilecek yeri belirlerim
scanf("%d",&a);
fonk(a);
	return 0;
}