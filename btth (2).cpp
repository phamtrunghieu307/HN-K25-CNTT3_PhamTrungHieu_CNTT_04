#include <stdio.h>
#include <math.h>
int main(){
	int quantity=10, choice;
	int arr[quantity];
	for (int i=0; i<quantity; i++){
		arr[i]=i;
	}
	while (choice!=6){
		printf("\n1: Them phan tu vao vi tri bat ky\n2: Xoa phan tu o vi tri bat ky\n3: cap nhat gia tri tai vi tri bat ky\n4: Tim kiem phan tu trong mang\n5: Hien thi mang\n6: Thoat chuong trinh\nNhap lua chon cua ban: ");
		scanf("%d",&choice);
		switch (choice){
			case 1:
				int value1, pos1;
				printf("Nhap gia tri can chen: ");
				scanf("%d",&value1);
				printf("Nhap vi tri can chen: ");
				scanf("%d",&pos1);
				for (int i=quantity; i>pos1; i--){
					arr[i]=arr[i-1];
				}
				arr[pos1]=value1;
				quantity++; 
				break; 
			case 2:
				int pos2;
				printf("Nhap vi tri can xoa: ");
				scanf("%d",&pos2);
				for (int i=pos2; i<quantity-1; i++){
				 	arr[i]=arr[i+1];
				}
				quantity--; 
				break; 
			case 3:
				int pos3, value3;
				printf("Nhap gia tri can cap nhat: ");
				scanf("%d",&value3);
				printf("Nhap vi tri can cap nhat: ");
				scanf("%d",&pos3);
				arr[pos3]=value3;
				break; 
			case 4:
				int value4;
				printf("Nhap gia tri can tim: ");
				scanf("%d",&value4);
				for (int i=0; i<quantity; i++){
					if (arr[i]==value4){
						printf("Gia tri %d dang o vi tri %d\n",value4,i);
					}
				}
				break; 
			case 5:
				for (int i=0; i<quantity; i++){
					printf("%d ",arr[i]);
				}
				break; 
			case 6:
				break; 
			default:
				printf("Vui long nhap lai\n");
				break; 
		}
	}
    return 0;
}
