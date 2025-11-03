#include <stdio.h>
int main(){
	
	int arr[] = { 1 , 2 , 5 , 3 , 25 , 5 , 1 , 2 , 1 };
	
	//dem so luong trong ham  
	int size = sizeof(arr) / sizeof(arr[0]);
	
	
	//Khai bao i  
	int i ,j; 
	int maxcount = 0 , most = 0 ;
	
	for ( i = 0 ; i < size ; i++){
		int count = 0 ; 
	 
	    for ( j = 0 ; j < size ; j++){
	    	if ( arr[i] = arr[j]){
	    		count++ ;
			} 
		} 
		if ( count > maxcount  ){
			maxcount = count;
			most = arr[i]; 
		} 
	} 
	
    printf("Phan tu xuat hien nhieu nhat : %d \n" , most); 
	
	
	return 0; 
} 

