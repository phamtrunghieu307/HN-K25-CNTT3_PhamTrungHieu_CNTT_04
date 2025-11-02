#include <stdio.h>
#include <math.h>
int main(){
	int  row, column;
	printf("Nhap so hang:");
	scanf("%d",&row);
	printf("Nhap so cot:");
	scanf("%d",&column);
	int arr[row][column];
	for (int i=0; i<row; i++){
		for (int j=0; j<column; j++){
			printf("Nhap phan tu hang %d cot %d: ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("mang day du:\n");
	for (int i=0; i<row; i++){
		for (int j=0; j<column; j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("mang vien:\n");
	for (int i=0; i<row; i++){
		for (int j=0; j<column; j++){
			if (j==0 or j==column-1){
				printf("%d ",arr[i][j]);
			} else if (i==0 or i==row-1){
				printf("%d ",arr[i][j]);
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}
    return 0;
}
