#include <stdio.h>

int main(){
	int nilai1, nilai2, jumlah;
	
	do {
		printf("Program penambahan jika nilai tidak sama setelah percobaan pertama");
		printf("\nNilai pertama: ");
		scanf("%d", &nilai1);
		printf("Nilai kedua: ");
		scanf("%d", &nilai2);
		jumlah=nilai1+nilai2;
		printf("Hasil tambah: %d\n", jumlah);		
	} while(nilai1!=nilai2);
	printf("\nProgram selesai.");
}

