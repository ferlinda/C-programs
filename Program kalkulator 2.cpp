#include<stdio.h>
void kali(){
		return x*y;
	}
	void bagi(){
		return x/y;
	}
	void tambah(){
		return x+y;
	}
	void kurang(){
		return x-y;
	}
int main(){
	float x,y,z, o;
	printf("x: ");
	scanf("%f",x);
	printf("y: ");
	scanf("%f",y);
	printf("Pilih: 1. kali 2. bagi 3. tambah 4. kurang");
	printf("Pilihan: ");
	scanf("%f",z);
	if(z==1){
		printf(kali());
	}
	else if(z==2){
		printf(bagi());
	}
	else if(z==3){
		printf(tambah());
	}
	else if(z==4){
		printf(kurang());
	}
	else{
		printf("Input salah")
	}
}
