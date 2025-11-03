#include <stdio.h>


int main(){

	int arr[5][5] = {
	{ 1 , 2 , 3 , 4 , 5 } ,
	{ 1 , 2 , 3 , 4 , 5 } ,
	{ 1 , 2 , 3 , 4 , 5 } ,
	{ 1 , 2 , 3 , 4 , 5 } ,
	{ 1 , 2 , 3 , 4 , 5 } 
	} ;

	int size  = 5; 
	int i , j ;
	int sum = 0; 
	
	for ( i = 0 ; i < size  ; i++){
		for ( j = 0 ; j < size  ; j++){
			if ( i == j  ){
				sum += arr[i][j];
				printf("%d\t" , arr[i][j]); 
			} else {
				printf (" \t"); 
			} 
		}
		
		printf(" \n"); 
	} 
	
	printf ("Tong gia tri cua phan tu co trong mang la : %d ", sum ); 
	

	return 0; 
} 

