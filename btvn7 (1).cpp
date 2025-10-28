#include<stdio.h>
int main(){
char KyTu;
printf("nhap ky tu ");
scanf(" %c",&KyTu);
if(KyTu >=65 && KyTu <= 90){
	char KyTuThuong = KyTu + 32;
	printf("ky tu thuong tuong ung: %c",KyTuThuong);
}else if(KyTu >=97 && KyTu <= 122){
	char KyTuHoa = KyTu - 32;
	printf("ky tu hoa tuong ung: %c",KyTuHoa);
}else{printf("khong phai chu cai");
}
return 0;
}

