#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    char longestWord[100];
    int maxLen = 0;

    printf("Nhap chuoi: ");
    scanf("%[^\n]", str);

    int i = 0;
    while (str[i] != '\0') {

        while (str[i] != '\0' && !isalpha(str[i])) {
            i++;
        }

        if (isalpha(str[i])) {
            int start = i;
            int wordLen = 0;

            while (isalpha(str[i])) {
                wordLen++;
                i++;
            }

            if (wordLen > maxLen) {
                maxLen = wordLen;

                for (int j = 0; j < wordLen; j++) {
                    longestWord[j] = str[start + j];
                }
                longestWord[wordLen] = '\0';
            }
        }
    }

    if (maxLen > 0) {
        printf("Tu dai nhat: %s\n", longestWord);
        printf("Do dai: %d\n", maxLen);
    } else {
        printf("Khong co tu nao trong chuoi\n");
    }

    return 0;
}
