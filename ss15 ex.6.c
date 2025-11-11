#include <stdio.h>

int nhap_mang(int n , int arr[]){
	int i ;
	for ( i = 0 ; i < n ; i++){
		printf("arr[%d]" , i );
		scanf("%d" , &arr[i]); 
	} 
} 


int sap_xep ( int n , int arr[]){
	int i , j , temp ; 
	
	for ( i = 0 ; i < n ; i++){
		for ( j = 0 ; j < n ; j++){
			if ( arr[j] < arr[j-1]){
				temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp; 
			} 
		} 
	} 
	
	printf("Sap xep theo thu tu tang dan : "); 
	for ( i = 0 ; i < n ; i++){
		printf("%d  " , arr[i]); 
	} 
	
} 

int main(){
	int n ;
	printf("Nhap n : ");
	scanf("%d" , &n );
	int arr[n]; 
	nhap_mang( n , arr );
	sap_xep( n , arr); 
} 
