#include <stdio.h>

int main()
{
    double a, b, c;
    int choice;

    while(1)
    {
        printf("Angka ke-1: ");
        scanf("%lf", &a);

        printf("Angka ke-2: ");
        scanf("%lf", &b);

        printf("\nTambah(1), Kurang(2), Kali(3), Bagi(4), Keluar(-404): ");
        scanf("%d", &choice);
		if (choice+404==0){
			break;
		}
		else {
		
	        printf("\n");
	        switch(choice) 
	        {
	                case(1):
	                    c = a + b;
	                    printf("%lf + %d = %lf\n", a, b, c);
	                    break;
	                case(2):
	                    c = a - b;
	                    printf("%lf - %lf = %lf\n", a, b, c);
	                    break;
	                case(3):
	                    c = a * b;
	                    printf("%lf * %lf = %lf\n", a, b, c);
	                    break;
	                case(4):
	                    c = a / (float)b;
	                    printf("%lf / %lf = %lf\n", a, b, c);
	                    break;
	                default:
	                    printf("Incorrect choice. Try again.\n");
	        } 
	        printf("====================================\n");
	    }
	}
}

