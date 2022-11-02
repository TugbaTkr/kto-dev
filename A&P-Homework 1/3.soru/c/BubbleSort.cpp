#include <stdio.h>
#include <stdlib.h>
//Bubble Sort
#define MAX 10000

void bubbleSort(int dizi[],int boyut){
	
	for(int i=0;i<boyut;i++){
		for(int j=1 ;j<boyut-i; j++){
			if(dizi[j-1] > dizi[j]){
			int temp = dizi[j];
			dizi[j] = dizi[j-1];
			dizi[j-1] = temp;
			}			
		}
	}
}
//Bubble sort algoritması (Küçükten büyüğe sıralama yapar)
int main()
{
	
	int tamSayiDizisi[MAX],boyut;
	
	printf("Kac elemanli bir dizi olusturmak istiyorsunuz?\n");
	//// Kaç adet sayı girileceği kullanıcıdan öğrenilir
	scanf("%d",&boyut);
	
	for (int i=0; i<boyut; i++){
		printf("%d. elemani giriniz: ",i+1);
		//Kullanıcıdan sayılar alınır
		scanf("%d", &tamSayiDizisi[i]);
	}
	for(int i=0; i<boyut ;i++){
		printf("%d" , tamSayiDizisi [i]);
		printf("\n\n"); // sayılar yazdırıldıktan sonra 2 satır aşağı iner
		//Alınan sayılar ekrana yazdırılır
	}
	
	bubbleSort(tamSayiDizisi,boyut);
	for(int i=0; i<boyut ;i++) {
		printf("%d ", tamSayiDizisi [i]);
		//Dizinin sıralanmış halini ekrana yazdırır	
	}

	return 0;
}