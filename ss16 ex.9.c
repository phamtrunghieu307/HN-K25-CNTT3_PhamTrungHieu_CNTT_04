#include <stdio.h>
#include <string.h>

int main() {
   
    char str[100];
	printf("Nhap chuoi : ");
	fgets ( str , 100 , stdin ); 
    fputs ( str , stdout ); 
    char ky_tu;
    
    
    
    printf("Nhap ky tu can xoa: ");
    scanf("%c", &ky_tu);
    
  
    int i, j = 0;
    int do_dai = strlen(str);
    
    for (i = 0; i < do_dai; i++) {
        if (str[i] != ky_tu) {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';  
    
  
    printf("Chuoi sau khi xoa ky tu '%c': %s\n", ky_tu, str);
    
    return 0;
}
