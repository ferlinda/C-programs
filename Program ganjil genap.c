#include<stdio.h>

int ganjilgenap(int a){
	if(a%2==0){
		printf("Genap");
	}
	else{
		printf("Ganjil");
	}
}

int main(){
	int a;
	printf("Program ganjil genap\n");
	printf("====================\n");
	printf("Masukkan angka: ");
	scanf("%d",&a);
	ganjilgenap(a);
	printf("\n====================\n");
	return 0;
}
