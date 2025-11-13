#include<stdio.h>
#include<stdlib.h>
#include<string.h>
    int isPalindrome(char str[]);
int main () {
    char str[100];
    printf("nhap chuoi: ");
    scanf("%[^\n]",str);


    if (isPalindrome(str)) {
        printf("la palindrome");
    }else {
        printf("khong la palindrome");
    }

    return 0;
}
int isPalindrome(char str[]) {
    for (int i=0; i<strlen(str); i++) {
        if ( str[i] != str[strlen(str)-i-1] ) {
            return 0;
        }

    }
return 1;
}

