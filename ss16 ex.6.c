#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(){
	
	char str[100];
	printf("Nhap chuoi : ");
	fgets( str , 100 , stdin );
	
	int count = 0 , i ; 
	for ( i = 0 ; i < strlen(str) ; i++){
		if ( str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z'){
			count++; 
		}
	} 
	
	printf("Chuoi co so ky tu chu so la %d " , count); 
	
	
	return 0; 
} 
