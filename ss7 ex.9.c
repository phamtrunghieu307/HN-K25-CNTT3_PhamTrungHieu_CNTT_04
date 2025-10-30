#include <stdio.h>
#include <math.h> 

int main(){
	
	
	int n ;
	int a  , b ; 
	
	printf("Hay nhap so nguyen duong n vao day : ");
	scanf("%d" , &n );

	
	if ( n < 0 ){
		printf ("Thong bao loi xin vui long nhap lai so nguyen n ");
		return 0; 
	} 
	
	
	int found = 0;
	int limit = cbrt(n);
	
	for ( a = 0 ; a <= limit ; a++){
		for( b = 0  ; b <= limit ; b++){
			if ( a*a*a + b*b*b == n ){
				printf("(%d , %d)\n" , a , b );
				found = 1; 
			} 
		} 
	}
	
	
	if(!found){
		printf("Khong co cap ( a , b) nao thoa man "); 
	} 
	
	return 0; 
} 

