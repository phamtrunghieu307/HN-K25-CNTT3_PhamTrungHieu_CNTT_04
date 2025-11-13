#include<stdio.h>
#include<ctype.h>
    void converseToUpper(char str[100]);
    void converseToLower(char str[100]);
int main() {
    char str[100];
    printf("nhap chuoi: ");
    scanf("%[^\n]",str);
    int choice;
    printf("nhap lua chon: ");
    scanf("%d",&choice);
    switch(choice) {
        case 1:
            converseToUpper(str);
            break;
        case 2:
            converseToLower(str);
    }

    return 0;
}
void converseToUpper(char str[100]) {
    for (int i=0; str[i]!= '\0'; i++) {
        str[i]=toupper(str[i]);

    }
    printf("%s",str);
}
void converseToLower(char str[100]) {
    for (int i=0; str[i]!= '\0'; i++) {
        str[i]=tolower(str[i]);
    }
    printf("%s",str);
}