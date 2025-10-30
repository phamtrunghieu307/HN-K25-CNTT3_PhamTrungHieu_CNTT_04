#include <stdio.h>
int main(){
	//In hinh chu nhat dau * n dong, m cot
	int n,m;
	
	printf("Nhap so dong: ");
	scanf("%d",&n);
	printf("Nhap so cot: ");
	scanf("%d",&m);
	
	for(int i=1;i<=n;i++){ //Chay theo so dong
		for(int j=1;j<=m;j++){ //Chay theo so cot
			printf("*\t");
		}
		printf("\n"); //In het 1 dong thi xuong dong
	}
}

