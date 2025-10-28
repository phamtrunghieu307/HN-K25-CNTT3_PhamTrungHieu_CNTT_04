#include<stdio.h>
int main(){
int ThuNhap;
printf("So tien(trieu) ");
scanf("%d",&ThuNhap);
float ThuePhaiDong;
if(ThuNhap <= 5){
	ThuePhaiDong = ThuNhap * (5.0 / 100);
	printf("Thue thu nhap phai dong: %.2f",ThuePhaiDong); 
}else if(ThuNhap <= 10){
	ThuePhaiDong = ThuNhap * (10.0 / 100);
	printf("Thue thu nhap phai dong: %.2f",ThuePhaiDong); 
}else if(ThuNhap > 10){
	ThuePhaiDong = ThuNhap * (15.0 / 100);
	printf("Thue thu nhap phai dong: %.2f",ThuePhaiDong);  
}
return 0;
}

