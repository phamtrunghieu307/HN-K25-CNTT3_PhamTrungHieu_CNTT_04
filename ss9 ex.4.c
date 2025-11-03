#include <stdio.h>

int main(){ 
	
	
	int  arr[3][4] = {
	{ 3 ,5 ,7 } ,
	{ 4 , 6 , 2} ,
	{ 9 , 2 , 4 } 
	};
	int rows = 3 , cols = 4; 
	int i , j ; 
	for ( i = 0 ; i < rows ; i++){
		for ( j = 0 ; j < cols ; j++){
			printf("%4d" , arr[i][j]); 
		} 
	} 
	 
	
	int max =  arr[i][j];
	
	for ( i = 0 ; i < rows ; i++){
		for ( j = 0 ; j < cols ; j++){
			if ( arr[i][j] > max  ){
				max = arr[i][j]; 
			} 
		} 
	} 
	
	
	printf("Phan tu lon nhat trong mang la : %d\n" , max ); 
	
	

	return 0; 
} 

