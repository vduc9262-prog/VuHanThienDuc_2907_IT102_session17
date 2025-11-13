#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define MAX 1000

int main() {
    char A[MAX];
    char B[MAX];
    int lenA, lenB;
    int i, j;
    int timThay = 0;

    printf("Nhap chuoi A: ");
    fgets(A, MAX, stdin);
    A[strcspn(A, "\n")] = '\0';

    printf("Nhap chuoi B: ");
    fgets(B, MAX, stdin);
    B[strcspn(B, "\n")] = '\0';

    lenA = 0;
    while (A[lenA] != '\0') lenA++;

    lenB = 0;
    while (B[lenB] != '\0') lenB++;

    if (lenB == 0) {
        printf("Co\n");
        return 0;
    }
    if (lenA < lenB) {
        printf("Khong\n");
        return 0;
    }

    for (i = 0; i <= lenA - lenB; i++) {
        int khop = 1;
        for (j = 0; j < lenB; j++) {
            if (A[i + j] != B[j]) {
                khop = 0;
                break;
            }
        }
        if (khop == 1) {
            timThay = 1;
            break;
        }
    }

    if (timThay == 1) {
        printf("Co\n");
    } else {
        printf("Khong\n");
    }

    return 0;
}

