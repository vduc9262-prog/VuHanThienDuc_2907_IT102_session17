#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#define MAX 500

int main() {
    char str1[MAX];
    char str2[MAX];
    int i = 0;
    int giongNhau = 1;

    printf("Nhap chuoi thu nhat: ");
    fgets(str1, MAX, stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Nhap chuoi thu hai: ");
    fgets(str2, MAX, stdin);
    str2[strcspn(str2, "\n")] = '\0';

    if (strlen(str1) != strlen(str2)) {
        printf("Khac nhau\n");
        return 0;
    }

    while (str1[i] != '\0') {
        if (tolower(str1[i]) != tolower(str2[i])) {
            giongNhau = 0;
            break;
        }
        i++;
    }

    if (giongNhau == 1) {
        printf("Giong nhau\n");
    } else {
        printf("Khac nhau\n");
    }

    return 0;
}

