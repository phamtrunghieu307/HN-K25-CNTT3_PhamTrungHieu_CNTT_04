#include<stdio.h>
int main(){
int num;
printf("nhap so ");
scanf("%d",&num); 
int rows=1,digits;
while(num/rows>=10){
	rows*=10; 
} 
while(rows>0){
	digits= num/rows;
	printf("%d ",digits);
	num=num%rows; 
	rows/=10; 
} 
return 0;
}
