#include<stdio.h>
#include<math.h>

double CR(double derajat){
	return (derajat*4/5);	
}
double CF(double derajat){
	return ((derajat*9/5)+32);	
}
double CK(double derajat){
	return (derajat+273);	
}

double RC(double derajat){
	return (5*derajat/4);	
}
double RF(double derajat){
	return ((9*derajat/4)+32);	
}
double RK(double derajat){
	return ((5*derajat/4)+273);	
}

double FC(double derajat){
	return (5*(derajat-32)/9);	
}
double FR(double derajat){
	return (4*(derajat-32)/9);	
}
double FK(double derajat){
	return (5*(derajat-32)/9+273);	
}

double KC(double derajat){
	return (derajat-273);	
}
double KR(double derajat){
	return (4*(derajat-273)/5);	
}
double KF(double derajat){
	return (9*(derajat-273)/5+32);	
}

int main(){
	double derajat, nilai;
	char awal, akhir;
	printf("Contoh:\n");
	printf("Input: 32 C K\n");
	printf("Ketikan C dan K tidak muncul karena pakai getch, akan diprint");
	printf("Output: 305\n");
	printf("=============\n");
	printf("Input: ");
	scanf("%lf",&derajat);
	awal = getch();
	akhir = getch();
	printf("%c %c\n", awal, akhir);
	if(awal=='C'){
		if(akhir=='R'){
			nilai=CR(derajat);
		}
		else if(akhir=='F'){
			nilai=CF(derajat);
		}
		else if(akhir=='K'){
			nilai=CK(derajat);
		}
	}
	else if(awal=='R'){
		if(akhir=='C'){
			nilai=RC(derajat);
		}
		else if(akhir=='F'){
			nilai=RF(derajat);
		}
		else if(akhir=='K'){
			nilai=RK(derajat);
		}
	}
	else if(awal=='F'){
		if(akhir=='C'){
			nilai=CF(derajat);
		}
		else if(akhir=='R'){
			nilai=FR(derajat);
		}
		else if(akhir=='K'){
			nilai=FK(derajat);
		}
	}
		else if(awal=='K'){
		if(akhir=='C'){
			nilai=KC(derajat);
		}
		else if(akhir=='R'){
			nilai=KR(derajat);
		}
		else if(akhir=='F'){
			nilai=KF(derajat);
		}
	}
	printf("Output: %lf",nilai);
	return 0;
}









