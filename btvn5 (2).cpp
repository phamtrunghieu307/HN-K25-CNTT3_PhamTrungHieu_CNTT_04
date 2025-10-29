#include<stdio.h>
int main(){
int so; 
printf("moi ban nhap so ");
scanf("%d",&so);
while(so < 1 || so > 9){
	printf("loi, nhap lai ");
	scanf("%d",&so); 
} 
int i; 
for(i=1;i<=10;i++){
	printf("%d * %d = %d\n",so,i,so*i); 
} 
return 0;
}
