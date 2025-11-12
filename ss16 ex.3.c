#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	
	

	int i;
	char str[100];
	
	printf("Nhap chuoi : ");
	fgets( str , 100 , stdin );
	
	str[strlen(str) - 1 ] = '\0'; 
	printf("Dao nguoc chuoi : "); 
	for ( i= strlen(str)-1; i >= 0  ; i--){
		printf("%c " , str[i] ); 
	} 
	
	
	return 0; 
} 

