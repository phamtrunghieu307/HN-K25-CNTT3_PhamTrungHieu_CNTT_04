#include <stdio.h>
#include <math.h>
int main(){
	int quantity;
	printf("Nhap so phan tu:");
	scanf("%d",&quantity);
	int arr[quantity];
	for (int i=0; i<quantity; i++){
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	printf("cac so nguyen to trong mang la:");
	for (int i=0; i<quantity; i++){
		int check=1;
		for (int j=2; j<=sqrt(arr[i]); j++){
			if (arr[i]%j==0){
				check=0;
				break;
			}
		}
		if (check==1){
			printf("%d ",arr[i]);
		}
	}
    return 0;
}
