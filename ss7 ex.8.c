#include <stdio.h>

int main(){
	
	int n , x ;
	
	printf("Hay nhap so n vao day : ");
	scanf("%d" , &n );
    
    printf("Hay nhap mot chu so tu 0-9 : ");
	scanf("%d" , &x);
	
	if ( n < 0 ){
       	n = -n ;  
	} 
	
	if(x < 0 || x > 9 ){
		printf("Thong bao loi xin vui long nhap lai chu so x "); 
		return 0; 
	} 
	
	int digit ;
	int count = 0; 
	if ( n == 0 && x == 0 ){
		count = 1; 
	} else {
		while( n > 0 ){
		 digit = n % 10;
		 if( digit == x ){
		 	count++; 
		 }	
		 n /= 10 ; 
		} 
	} 
	    printf("Chu so %d xuat hien %d lan " , x , count ); 

	
} 
