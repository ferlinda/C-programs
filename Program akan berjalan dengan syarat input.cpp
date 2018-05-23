#include <stdio.h>

int main(void){
	int counter=1;
	int a;
	int b;
	int hasil;
	printf("Program akan keluar bila angka pertama atau kedua bernilai -1\n");
	do{
		printf("Masukkan angka pertama: ");
		scanf("%d",&a);
		printf("Masukkan angka kedua: ");
		scanf("%d",&b);
		hasil=a+b;
		printf("Jumlahnya: %d\n", hasil);
	} while((a!=-1) && (b!=-1));
	return 0;
}
