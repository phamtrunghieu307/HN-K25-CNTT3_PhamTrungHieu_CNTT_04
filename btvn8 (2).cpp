#include<stdio.h>
int main(){
int a,b;
int bcnn;
printf("nhap so dau ");
scanf("%d",&a);
printf("nhap so tiep theo ");
scanf("%d",&b);

 for(int i=a;i>0;i++){
 	if(i%a==0 && i%b==0){	 
	 	printf("boi chung nho nhat la: %d",i);
	 	
	 }
 
}

return 0;
}

