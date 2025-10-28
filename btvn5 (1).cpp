#include<stdio.h>
int main(){
int tuoi;
printf("Nhap tuoi ");
scanf("%d",&tuoi);
int TienVe; 
	if(tuoi <0 || tuoi > 100){
	printf("Tuoi khong hop le");
}
	else if (tuoi < 6){	
	TienVe = 0;
	printf("So tien ve: %d VND",TienVe); 
}else if (tuoi < 18){
	TienVe = (20000 * 50) / 100;
	printf("So tien ve: %d VND",TienVe); 
}else if (tuoi <= 60){
	TienVe = (20000 * 100) / 100;
	printf("So tien ve: %d VND",TienVe); 
}else if (tuoi >=61){
	TienVe = (20000 * 70 )/ 100;
	printf("So tien ve: %d VND",TienVe); 
}   
return 0;
}


