#include<stdio.h>

int tambah(int a, int b)
{
	return (a+b);
}

int main()
{
 
	int a,b,c;
	printf("Tambah-tambahan\n");
	printf("===============\n");
	printf("Nilai pertama: ");
	scanf("%d",&a);
	printf("\nNilai kedua: ");
	scanf("%d",&b);
	c=tambah(a,b);
	printf("===============\n");
	printf("Hasil: %d\n",c);
	printf("===============");
	return 0;
}
