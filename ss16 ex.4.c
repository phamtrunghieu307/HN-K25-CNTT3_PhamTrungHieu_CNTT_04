#include <stdio.h>
#include <math.h>
#include <string.h>


int main(){
	
	int i ;
	char str[100];
	
	 
	printf("Nhap chuoi : ");
	fgets ( str , 100 , stdin );
	
	char  n; 
	printf("Nhap ky tu ban muon biet : ");
	scanf("%c" , &n );
	
	int count = 0 ; 
	for ( i = 0 ; i < strlen(str) ; i++){
		if ( n == str[i]){
			count++; 
		} 	
	} 
	
		printf("So lan xuat hien cua ky tu %c la %d " , n , count ); 
	
	

	
	return 0; 
} 
