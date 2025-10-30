#include <stdio.h>


int main(){
	
	int n;
	printf("Hay nhap so nguyen n vao day : ");
	scanf("%d",&n);
	
	int so_dao_nguoc = 0;
	int temp; 
	
	if( n < 0 ){
		temp = - n ; 
	}  else {
		temp = n ; 
	} 
	
	while( temp > 0 ){
		so_dao_nguoc = so_dao_nguoc * 10 + temp % 10;
		temp /= 10; 
	} 
	if ( n <  0 ){
		so_dao_nguoc = - so_dao_nguoc; 
	} 
	
	printf("So dao nguoc : %d\n ", so_dao_nguoc);
	
	return 0; 
} 
