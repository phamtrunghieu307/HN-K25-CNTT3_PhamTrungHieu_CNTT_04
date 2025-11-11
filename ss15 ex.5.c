#include <stdio.h>

void tim_phan_tu_xuat_hien_nhieu_nhat(int arr[], int n) {
	int phan_tu , so_lan ; 
	int i , j ; 
	for ( i = 0 ; i < n ; i++){
		printf("arr[%d] " , i );
		scanf("%d" , &arr[i]); 
	} 
    if (n <= 0) {
        phan_tu = -1;
        so_lan = 0;
        return;
    }
    
    int max_count = 0;
    int max_element = arr[0];
    
    for ( i = 0; i < n; i++) {
        int count = 0;
        
        
        for ( j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        
        if (count > max_count) {
            max_count = count;
            max_element = arr[i];
        }
    }
    
    phan_tu = max_element;
    so_lan = max_count;
    
    printf("so la xuat hien cua %d la %d " , max_element , max_count ); 
}

int main(){
	int n ;
	printf("Nhap n : ");
	scanf("%d" , &n ); 
	int arr[n]; 
	tim_phan_tu_xuat_hien_nhieu_nhat( arr , n ); 
} 
