#include <stdio.h>

int main(){
	int n;
	
	do {
		
		printf("Hay nhap mot so nguyne de khoi tao mang 2 chieu : ");
		scanf("%d" , &n );
		
		if( n < 0 ){
			printf("Thong bao loi , xin vui long nhap lai so nguyen n \n"); 
		} 
		
	} while(n < 0 ); 
	
	int arr[n][n];
	int i , j ; 
	
	for ( i = 0 ; i < n ; i++ ){
		for ( j = 0 ; j < n ; j++ ){
			arr[i][j] = i * n + j + 1 ; 
		} 
	} 
	
	for ( i = 0 ; i < n ; i++){
		for( j = 0 ; j < n ; j++){
		printf("%d " , arr[i][j]);
    	}
    	printf(" \n"); 
	} 
	
	
	
} 

