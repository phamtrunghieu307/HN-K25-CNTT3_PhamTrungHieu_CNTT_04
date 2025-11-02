#include <stdio.h>
#include <math.h>
int main(){
	int arr[5];
	printf("Nhap phan tu:");
	for (int i=0; i<5; i++){
		scanf("%d",&arr[i]);
	}  
    for (int i=0; i<5; i++){
    	if (arr[i]%2==0){
    		arr[i]=arr[i]+3;
		} else {
			arr[i]=arr[i]+2;
		}
	} 
    for (int i=0; i<5; i++){
    	printf("%d",arr[i]);
    }
    return 0;
}
