#include<stdio.h>
int main(){
int a,b;

printf("nhap so dau ");
scanf("%d",&a);
printf("nhap so tiep theo ");
scanf("%d",&b);

 for(int i=a;i>0;i--){
 	if(a%i==0 && b%i==0){	 
	 	printf("uoc chung lon nhat la:%d",i);
	 	break;
	 }
 
}

return 0;
}

