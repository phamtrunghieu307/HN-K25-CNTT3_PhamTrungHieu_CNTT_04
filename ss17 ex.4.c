#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char str[100];
        printf("nhap chuoi: ");
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    char letter;
    printf("nhap ki tu can xoa: ");
    scanf("%c",&letter);
    int i,j;
    while (str[i]!='\0') {
        if (str[i]!=letter) {
            str[j]=str[i];
            j++;
        }
        i++;
    }
    str[j]='\0';
printf("chuoi sau khi xoa la: %s",str);
    return 0;
}