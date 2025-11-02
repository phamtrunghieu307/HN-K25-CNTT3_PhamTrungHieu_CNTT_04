#include <stdio.h>
#include <math.h>
int main(){
	int arr[5], count;
	printf("Nhap phan tu:");
	for (int i=0; i<5; i++){
		scanf("%d",&arr[i]);
		if (arr[i]%2==0){
			count++;
		}
	}
		for (int i=0; i<5; i++){
			if (arr[i]%2==0 and count>0){
				printf("%d ",arr[i]);
			} else if (count==0) {
				printf("Khong co so chan");
				break;
			}
		}
    return 0;
}
