#include <stdio.h>
 
int main()
{
    int pilihan,sisi, volume, tinggi, r, panjang, lebar;
 	
	printf("=================================\n");
	printf("PROGRAM PENCARI VOLUME\n");
	printf("=================================\n");
    printf("[1] Kubus\n");
    printf("[2] Balok\n");
    printf("[1] Silinder\n");
    printf("Pilihan Anda: ");
    scanf("%d", &pilihan);
    if(pilihan==1){
    	printf("Masukkan sisi kubus: ");
    	scanf("%d",&sisi);
    	printf("Volume: %d", sisi*sisi*sisi);
	}
	else if(pilihan==2){
		printf("Masukkan panjang balok: ");
    	scanf("%d",&panjang);
    	printf("Masukkan lebar balok: ");
    	scanf("%d",&lebar);
    	printf("Masukkan tinggi balok: ");
    	scanf("%d",&tinggi);
    	printf("Volume: %d", panjang*lebar*tinggi);;
	}
	else if(pilihan==3){
		printf("Masukkan tinggi silinder: ");
    	scanf("%d",&tinggi);
		printf("Masukkan jari-jari silinder: ");
    	scanf("%d",&r);
    	printf("Volume: %d",(r*r*22*tinggi/7));
	}
	else{
		printf("Input salah");
	}
    printf("\n=================================\n");
    printf("\n");
    printf("Program selesai.");
 
    return 0;
}
 
