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
}//tim kiem
int search;
printf("\nnhap so can tim ");
scanf("%d",&search);
int start=0;
int end=sizeof(arr)/sizeof(int);
int mid;
while(start<=end){
	mid= (start+end)/2;
	if(arr[mid]==search){
		printf("\nvi tri can tim %d",mid);
	return 0;
	break;
	}else if(arr[mid]>search){
		end=mid-1;
	}else{
		start=mid+1;
	}
}
printf("\nkhong tim thay");
return 0;
}

