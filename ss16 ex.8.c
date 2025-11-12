#include <stdio.h>
#include <string.h>

void viet_hoa_chu_cai_dau(char str[]) {
    int i;
    int do_dai = strlen(str);
    
 
    if (do_dai > 0 && str[0] >= 'a' && str[0] <= 'z') {
        str[0] = str[0] - 32;
    }
    
    
    for (i = 1; i < do_dai; i++) {
      
        if (str[i-1] == ' ' && str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    } 
    
    printf("Chu dau viet hoa : %s  " , str ); 
    
    
}

int main() {
    
    char str[100] ;
    printf("Nhap chuoi : ");
	fgets(str , 100 , stdin ); 
    
    viet_hoa_chu_cai_dau(str);
    
    
    
    return 0;
}
