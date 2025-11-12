#include <stdio.h>
#include <math.h>
#include <string.h>


int main(){
	
	char str[100];
	
	printf("Nhap chuoi : ");
	fgets( str , 100 , stdin );
	int i; 
	int count = 1;
	for ( i = 0 ; i < strlen(str) ; i++){
		if (str[i] == ' '){
			count++; 
		} 
	} 
	
	printf("Chuoi co so tu %d  " , count ); 
	
	
	
	
	
	
	return 0; 
} 
