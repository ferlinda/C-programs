#include<stdio.h>
float tambah(float a, float b)
{
	return (a+b);
}
float kurang(float a,float b)
{
	return (a-b);
}
float kali(float a,float b)
{
	return (a*b);
}
float bagi(float a, float b)
{
	return (a/b);
}
 
int main()
{
 
	float a,b,c;
	int z;
	printf("a: ");
	scanf("%f",&a);
	printf("b: ");
	scanf("%f",&b);
	printf("Pilih: 1. kali 2. bagi 3. tambah 4. kurang");
	printf("\nPilihan: ");
	scanf("%d",&z);
	if (z==1){
		c=kali(a,b);
	}
    else if (z==2){
		c=bagi(a,b);
	}
	else if (z==3){
		c=tambah(a,b);
	}
	else if (z==4){
		c=kurang(a,b);
	}
	else{
		printf("input salah\n");
	}
	printf("Hasil: %f\n",c);
	return 0;
}
