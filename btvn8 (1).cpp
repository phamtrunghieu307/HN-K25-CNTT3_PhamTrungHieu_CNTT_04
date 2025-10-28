#include<stdio.h>
int main(){
int SoMetKhoi;
printf("nhap so nuoc tieu thu ");
scanf("%d",&SoMetKhoi);
int TongTien;
if(SoMetKhoi < 0){
	printf("khong hop le");
}else if(SoMetKhoi == 0){printf("tong tien= 0");
}else if(SoMetKhoi <=10){
	TongTien = SoMetKhoi * 6000;
	printf("tong tien nuoc la: %d",TongTien);
}else if(SoMetKhoi <= 20){
	TongTien = 10 * 6000 + (SoMetKhoi - 10) * 7000;
	printf("tong tien nuoc la: %d",TongTien);
}else if(SoMetKhoi <= 30){
	TongTien = 10 * 6000 + 10 * 7000 + (SoMetKhoi - 20) * 8500;
	printf("tong tien nuoc la: %d",TongTien);
}else if(SoMetKhoi > 30){
	TongTien= 10 * 6000 + 10 * 7000 + 10 * 8500 +(SoMetKhoi - 30) * 10000;
	printf("tong tien nuoc la: %d",TongTien);
}
return 0;
}

