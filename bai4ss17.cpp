#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    char chuoi[1000];
    char ky_tu_xoa;
    int i, j, len;

    printf("Nhap vao mot chuoi bat ky: ");
    fgets(chuoi, sizeof(chuoi), stdin);

    len = strlen(chuoi);
    if (chuoi[len - 1] == '\n') {
        chuoi[len - 1] = '\0';
        len--;
    }

    printf("Nhap vao ky tu can xoa: ");
    scanf(" %c", &ky_tu_xoa);

    j = 0;
    for (i = 0; i < len; i++) {
        if (chuoi[i] != ky_tu_xoa) {
            chuoi[j] = chuoi[i];
            j++;
        }
    }
    chuoi[j] = '\0';

    printf("Chuoi sau khi xoa ky tu '%c': %s\n", ky_tu_xoa, chuoi);

    return 0;
}
