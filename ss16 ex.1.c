#include <stdio.h>
#include <string.h>
int i ; 
int main(){
	int n ; 
	char str[100]; 
	printf("Nhap n : ");
	fgets( str , sizeof(str) , stdin );
	printf("Chuoi ban nhap la : %s \n " , str ); 
	str[strlen(str) - 1 ] = '\0'; 
	printf("do dai chuoi : %d\n" , strlen(str));
	
	 
} 

