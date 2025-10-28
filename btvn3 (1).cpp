#include<stdio.h>
int main(){
float DiemTB;
printf("nhap diem trung binh ");
scanf("%f",&DiemTB);
	if(DiemTB >= 8){
		printf("Hoc luc gioi");
	}else if(DiemTB >= 6.5){
		printf("Hoc luc kha");
	} else if(DiemTB >= 5){
		printf("Hoc luc trung binh");
	}else if(DiemTB < 5){
		printf("Hoc luc yeu");
	}
return 0;
}

