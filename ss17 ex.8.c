#include <stdio.h>
#include <string.h>
#include <ctype.h>
int valiDateString(char str[]) {
    int length=strlen(str);
    if(length==0) {
        return 0;
    }
    int isUpper=0,isDigit=0,isSpecial=0;
    for (int i=0;i<length;i++) {
        if (isupper(str[i])) {
            isUpper=1;
        }else if (isdigit(str[i])) {
            isDigit=1;
        }else {
            isSpecial=1;
        }
    }
    if (isUpper && isDigit && isSpecial) {
        return 1;
    }else {
        return 0;
    }
}
int main() {

    char str[100];

    printf("nhap chuoi: ");
    fgets(str,100,stdin);
    if(valiDateString(str)) {
        printf("hop le\n");
    }else {
        printf("khong hop le\n");
    }

}