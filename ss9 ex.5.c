#include <stdio.h>


int main(){
	
	int arr[3][3] = { 
	{ 2 ,4 , 7 } , 
     { 4 , 6 , 9 } , 
	 { 5 , 2, 1 } 
	} ;
	
	int i , j ;
	int sum = 0; 
	
	for ( i = 0 ; i < 3 ; i++){
		for ( j = 0 ; j < 3 ; j++){
			if ( i == 0 || i == 2 || j == 0 || j == 2 ){
				sum += arr[i][j]; 
				printf("%d\t" , arr[i][j]);
			} else {
				printf(" \t"); 
			}
		} 
			printf(" \n"); 
	} 
	

 printf("\nTong cac phan tu trn duong bien : %d\n" , sum ); 
	
	
	
	return 0; 
} 

