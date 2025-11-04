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
 	int  search; 
 	printf("\nnhap so can tim ");
 	scanf("%d",&search);
 	int flag= -1;
 	int size=sizeof(arr) / sizeof(int); 
	 for(int i=0;i<size;i++) {
	 	if(arr[i]==search){
	 		flag=i;
	 		break;
		 } 
	 }
	 if(flag!=-1){
	 	printf("phan tu can tim o vi tri %d",flag);
	 	
	 }else
	 printf("khong thay");
return 0;
}

