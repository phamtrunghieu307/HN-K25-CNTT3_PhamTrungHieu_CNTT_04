#include <stdio.h>
#include <string.h>


void nhap_chuoi(char str[]) {
    printf("Nhap chuoi vao day: ");
    fgets(str, 100, stdin);
    printf("Chuoi vua nhap: ");
    fputs(str, stdout);
}


void dem(char str[]) {
    int count = 0;  
    int i; 
    for ( i = 0; i < strlen(str); i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            count++; 
        } 
    }
    
    printf("So chu cai trong chuoi: %d\n", count );
}

void chu_so(char str[]){
	int i ;
	int count = 0 ; 
	for ( i = 0 ; i < strlen(str) ; i++){
		if ( str[i] >= '0' && str[i] <= '9' ){
			count++; 
		} 
	} 
	printf("So ky tu la chu so : %d " , count ); 
} 

void ky_tu_dac_biet(char str[]){
    int i;
    int count = 0; 
    str[strlen(str) - 1 ] = '\0'; 
    for (i = 0; i < strlen(str); i++){
        
        if (!(str[i] >= 'A' && str[i] <= 'Z') &&
            !(str[i] >= 'a' && str[i] <= 'z') &&
            !(str[i] >= '0' && str[i] <= '9') 
             ) {
            count++; 
        } 
    } 
    printf("\nSo ky tu dac biet: %d\n", count); 
}

int main() {
    char str[100];
    
    nhap_chuoi(str);
    dem( str ); 
    chu_so( str ); 
    ky_tu_dac_biet( str ); 
    return 0;
}
