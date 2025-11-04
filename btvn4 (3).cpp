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
}//sap xep
int size=sizeof(arr)/sizeof(int);
for(int i=0;i<size;i++){
	for(int j=0;j<size-1-i;j++){
		if(arr[j+1]<arr[j]){
			int temp =arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
	}
	}printf("\nmang da sap xep ");
	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
}
return 0;
}

