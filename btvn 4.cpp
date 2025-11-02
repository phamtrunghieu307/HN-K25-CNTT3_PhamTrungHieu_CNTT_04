#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("Nhap so phan tu:");
	scanf("%d",&n);
	int arr[n];
	printf("nhap phan tu:");
	for (int i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}  
	for (int i=0; i<n; i++){
		printf("%d ",arr[i]);
	} 
    return 0;
}
