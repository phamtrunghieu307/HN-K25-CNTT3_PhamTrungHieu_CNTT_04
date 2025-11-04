#include<stdio.h>
int main(){
	//nhap mang
int n;
printf("nhap so n ");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
	printf("arr[%d]=",i);
	scanf("%d",&arr[i]); 
}  printf("mang vua nhap:");
for(int i=0;i<n;i++){
	printf("%d ",arr[i]);
}//tim kiem
 	int  search,count=0; 
 	printf("\nnhap so can tim ");
 	scanf("%d",&search);
 	int flag= -1;
 	int size=sizeof(arr) / sizeof(int); 
	 for(int i=0;i<size;i++) {
	 	if(arr[i]==search){
	 		count++;
	 		flag=i;
	 	
		 } 
	 }printf("%d xuat hien %d lan",search,count);
	
	 
return 0;
}

