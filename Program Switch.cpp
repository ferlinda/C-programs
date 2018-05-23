#include<stdio.h>
	int main(){
    char pilih;
    printf("Masukan pilihan Anda:\n");
    printf("a) Program 1 \n");
    printf("b) Program 2 \n");
    scanf("%c", &pilih);
    switch (pilih){
	case 'a':
	   printf("Run program 1\n");
	   break;
	case 'b':{           //pake {} karena > 1 statement
           printf("Run program 2\n");
	   printf("Please Wait\n");
	   break;
	}
	default:
	  printf("Oppps! inputan anda salah\n");
	  break;
    }
    return 0;}
