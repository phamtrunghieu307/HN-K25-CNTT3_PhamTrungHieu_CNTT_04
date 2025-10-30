#include <stdio.h>
int main(){
	long n;
	
	do{
		printf("Nhap so nguyen duong n: ");
		scanf("%ld",&n);
		if(n<1){
			printf("Nhap lai n!\n");
		}
	}while(n<1);
	
	//Tach va dao nguoc so n
	int inverseN, temp = n, unit;
	while(temp>0){
		unit = temp%10; //Lay so cuoi cung cua so temp
		inverseN = inverseN*10+unit;
		temp = temp/10; 
	}
	//printf("So dao nguoc: %ld",inverseN);
	
	if(n==inverseN){
		printf("%ld la so dao nguoc",n);
	}else{
		printf("%ld khong phai la so dao nguoc",n);
	}
}

