#include <stdio.h>
#include <math.h>
int main(){
	int arr[5], max, min;
	printf("Nhap phan tu:");
	for (int i=0; i<5; i++){
		scanf("%d",&arr[i]);
	}  
	for (int i=0; i<5; i++){
		if (arr[i]>max){
			max=arr[i];
		}
		if (arr[i]<min){
			min=arr[i];
		}
	} 
	printf("Gia tri lon nhat va nho nhat la: %d va %d",max,min);
    return 0;
}
