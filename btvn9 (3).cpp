#include<stdio.h>
int main(){
int a,b,c;
int luaChon;
int tong,diemTB;
int daNhap=0; 

while(luaChon != 6){
printf("menu\n1.nhap 3 so\n2.tong 3 so\n3.trung binh cong 3 so\n4.so nho nhat\n5.so lon nhat\n6.thoat\n");
printf("nhap lua chon cua ban ");
scanf("%d",&luaChon);
	switch(luaChon){
		case 1:
			printf("nhap so dau ");
			scanf("%d",&a);
			printf("nhap so thu hai ");
			scanf("%d",&b);
			printf("nhap so cuoi ");
			scanf("%d",&c);
			daNhap=1;
			break;
			
			
		case 2:
			if(daNhap==0){
				printf("vui long nhap 3 so truoc\n"); 
			} else  
			 tong = a + b + c;
			printf("tong ba so la %d\n",tong);
			daNhap=1;
			luaChon ==6;
			break;
		case 3:
		if(daNhap==0){
				printf("vui long nhap 3 so truoc\n"); 
			}else 
			 diemTB =(a + b + c)/3;
			printf("trung binh cong ba so la %d\n",diemTB);
			daNhap=1;
			break;
		case 4:
			if(daNhap==0){
				printf("vui long nhap 3 so truoc\n"); 
			} else
			if(a >= b && b >= c){
				printf("min= %d",c);
			}else if(a>=c && c>=b){
				printf("min= %d",b);	
			}else if(b>=a && a>=c){
				printf("min= %d",c);
			}else if(b>=c && c>=a){
				printf("min= %d",a);
			}else if(c>=a && a>=b){
				printf("min= %d",b);
			}else if(c>=b && b>=a){
				printf("min= %d",a);
			}
			daNhap=1;
			break;
		case 5:
			if(daNhap==0){
				printf("vui long nhap 3 so truoc\n"); 
			} else
			if(a >= b && b >= c){
				printf("max= %d\n",a);
			}else if(a>=c && c>=b){
				printf("max= %d\n",a);	
			}else if(b>=a && a>=c){
				printf("max= %d\n",b);
			}else if(b>=c && c>=a){
				printf("max= %d\n",b);
			}else if(c>=a && a>=b){
				printf("max= %d\n",c);
			}else if(c>=b && b>=a){
				printf("max= %d\n",c);
			}
			daNhap=1;
			break;
		case 6:
			printf("thoat\n");
		
		
				
	}
	
	}

return 0;
}

