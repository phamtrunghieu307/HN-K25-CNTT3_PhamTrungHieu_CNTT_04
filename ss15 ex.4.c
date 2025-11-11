#include <stdio.h>


int nhap_mang( int n  , int arr[]){
	int i ;
	for ( i = 0 ; i < n ; i++){
		printf("arr[%d] = " , i );
		scanf("%d" , &arr[i]); 
	} 
} 


int tinh_tong( int n , int arr[]){
	int i , tong = 0 ; 
	for ( i = 0 ; i < n ; i++){
		tong += arr[i]; 
	} 
	
	printf("Tong cua phan tu = %d " , tong ); 
} 

int main (){
	int n ;
	printf("Nhap n : ");
	scanf("%d" , &n );
	int arr[n]; 
	nhap_mang( n , arr );
	tinh_tong( n , arr ); 
} 
