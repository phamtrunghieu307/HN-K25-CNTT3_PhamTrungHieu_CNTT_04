#include <stdio.h>

int main(){
	
	int arr[] = { 1  , 2 , 3 , 4 , 5 , 83 , 34, 12  };
	
	int do_dai = sizeof(arr) / sizeof(arr[0]); 

	int i , j ;
	int sum = 0 ; 
	
	for  ( i = 0 ; i < do_dai ; i++){
		sum += arr[i];
	}
  
    printf("Gia tri trung binh co trong mang la : %d / %d = %d " , sum , do_dai , sum / do_dai ); 
	
	return 0; 
} 

