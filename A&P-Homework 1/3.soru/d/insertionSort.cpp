#include <stdio.h>
//global 
int A[100];
int key;
void insertionSort(int A[], int elemanSayisi){
  int i,j;
  for (i=0;i<elemanSayisi;i++){
    key = A[i];
    j = i - 1 ; //Key değerinin solu sıralı olacaktır.

    //kaydırma işlemi başlıyor
    while (key < A[j] && j >=0) {
    A[j+1] = A[j]; //birer tane kaydı
    j--;
    }
  A[j+1] = key; //araya sokma işlemi
  }
}

int main(){
  int i, adet;
  printf("\nDizi kac elemanli?\n");
  scanf("%d", &adet);
	
  for(i=0; i<adet; i++){
    printf("\n%d. sayiyi giriniz: ",i+1);
    scanf("%d", &A[i]);
  }

  insertionSort(A,adet);
	
  for(i=0; i<adet; i++){
    printf(" %d ", A[i]);
  }
	
  return 0;	
}