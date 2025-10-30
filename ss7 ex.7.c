#include <stdio.h>

int main() {
    int a, b;
    
    printf("Hay nhap so nguyen a vao day : ");
    scanf("%d", &a);
    printf("Hay nhap so nguyen b vao day :");
    scanf("%d", &b);
    
    // Ð?m b?o a <= b (hoán ð?i n?u c?n)
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    printf("\nCac so nguyen to trong khoang [%d, %d] la:\n", a, b);

    int count_primes = 0;
    int num; 
    int i; 
    for ( num = a; num <= b; num++) {
        

        if (num < 2) {
            continue; 
        }

        int is_prime = 1;
        
       
        for ( i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                
                is_prime = 0; 
                break; 
            }
        }
        
      
        if (is_prime == 1) {
            printf("%d ", num);
            count_primes++;
        }
    }

    if (count_primes == 0) {
        printf("Khong co so nguyen to nao trong khoang nay.");
    }
    
    printf("\n");
    
    return 0;
}
