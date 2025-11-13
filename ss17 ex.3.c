#include<stdio.h>
#include<string.h>
int main() {
    char str1[100];
    char str2[100];
    printf("nhap chuoi thu nhat: ");
    fgets(str1,100,stdin);
    str1[strcspn(str1,"\n")]='\0';
    printf("nhap chuoi thu hai: ");
    fgets(str2,100,stdin);
    str2[strcspn(str2,"\n")]='\0';
    strcat(str1, str2);
    printf("%s",str1);


    return 0;
}