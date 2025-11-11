#include <stdio.h>
int tinhTongChuSo(int n){
	int tong = 0;
	while (n!= 0){
		int chuSo = n%10;
		tong += chuSo;
		n/=10; 
	}
	return tong; 
} 
int main(){
	int num;
	printf("Nhap mot so nguyen:");
	scanf("%d", &num);
	
	int tong = tinhTongChuSo(num);
	printf("\nTong cac chu so cua %d la %d", num, tong);
	
	return 0; 
} 
