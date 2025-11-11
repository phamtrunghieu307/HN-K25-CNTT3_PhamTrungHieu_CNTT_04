#include <stdio.h> 
#include <stdlib.h>

int tinhHieu(int a, int b){
	return abs(a-b); 
}
int tinhTich(int a, int b){
	return a*b; 
}
int main(){
	int num1;
	int num2;
	printf("Nhap so thu nhat:");
	scanf("%d",&num1);
	printf("Nhap so thu hai:");
	scanf("%d", &num2);
	
	int hieu = tinhHieu(num1, num2);
	printf("\nHieu cua %d va %d la %d", num1, num2, hieu);
	
	int tich = tinhTich(num1, num2);
	printf("\nTich cua %d va %d la %d", num1, num2, tich);
	
	return 0; 
} 
