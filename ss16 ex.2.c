#include <stdio.h>
#include <string.h> 

int main(){
	
	int i ; 
	char str[100];
	printf("Nhap chuoi : ");
	fgets( str , 100 , stdin );
	
	
	
	printf("Hien thi : ");
	for ( i = 0 ; i < strlen(str) ; i++){
		printf("%c " , str[i]); 
	} 

} 

