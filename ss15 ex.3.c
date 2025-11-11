#include <stdio.h>

int nhap_mang( int n , int arr[]){
	
	int i;
	for ( i = 0 ; i < n ; i++){
		printf("arr[%d] = " , i );
		scanf("%d" , &arr[i]); 
	} 
	
	printf("Hien thi : "); 
	for ( i = 0 ; i < n ; i++){
		printf("%d " , arr[i]); 
	} 
} 

int dao_nguoc( int n , int arr[]){
	
	int i , tong = 0 , dao_nguocc = 0 ; 
	for ( i = 0 ; i < n ; i++){
		tong = tong * 10 +  arr[i]; 
	} 
	
	printf("\nDao nguoc mang : "); 
	while ( tong != 0 ){
		 dao_nguocc =  tong % 10;
		 printf("%d " , dao_nguocc); 
		 tong /= 10 ; 
	} 
	
}
    

int main(){
	
	int n ; 
	printf("Nhap n = ");
	scanf("%d" , &n );
	int arr[n]; 
	nhap_mang( n , arr ); 
	dao_nguoc( n , arr ); 
} 

