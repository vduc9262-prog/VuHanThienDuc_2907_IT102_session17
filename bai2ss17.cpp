#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#define MAX 200

void displayMenu();
void inputString(char str[], size_t size);
void toUpperCase(char str[]);
void toLowerCase(char str[]);

int main() {
    char myString[MAX] = {0};
    int choice;
    char temp;

    do {
        displayMenu();
        printf(" => Nhap lua chon (1-4): ");
        
        if (scanf("%d", &choice) != 1) {
            printf("\n Loi: Vui long nhap so tu 1 den 4!\n");
            while ((temp = getchar()) != '\n' && temp != EOF);
            continue;
        }
        while ((temp = getchar()) != '\n' && temp != EOF);

        switch (choice) {
            case 1:
                inputString(myString, MAX);
                printf("\n Da nhap chuoi thanh cong!\n");
                printf(" Chuoi: %s\n", myString);
                break;

            case 2:
                if (myString[0] == '\0') {
                    printf("\n Chua nhap chuoi! Hay nhap chuoi truoc.\n");
                } else {
                    toUpperCase(myString);
                    printf("\n Da chuyen sang chu HOA:\n");
                    printf(" %s\n", myString);
                }
                break;

            case 3:
                if (myString[0] == '\0') {
                    printf("\n Chua nhap chuoi! Hay nhap chuoi truoc.\n");
                } else {
                    toLowerCase(myString);
                    printf("\n Da chuyen sang chu thuong:\n");
                    printf(" %s\n", myString);
                }
                break;

            case 4:
                printf("\n Cam on ban da su dung chuong trinh!\n");
                printf(" Tam biet va hen gap lai! \n\n");
                break;

            default:
                printf("\n Lua chon khong hop le! Chi chon 1, 2, 3 hoac 4.\n");
        }

        if (choice != 4) {
            printf("\n Nhan Enter de quay lai menu...");
            getchar();
        }

    } while (choice != 4);

    return 0;
}

void displayMenu() {
    system("cls");
    printf("==================================\n");
    printf("     CHUYEN DOI CHUOI KY TU       \n");
    printf("==================================\n");
    printf("1. Nhap chuoi moi\n");
    printf("2. Chuyen sang chu HOA\n");
    printf("3. Chuyen sang chu thuong\n");
    printf("4. Thoat\n");
    printf("----------------------------------\n");
}

void inputString(char str[], size_t size) {
    printf("Nhap vao mot chuoi bat ky: ");
    fgets(str, size, stdin);
    str[strcspn(str, "\n")] = '\0';
}

void toUpperCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper((unsigned char)str[i]);
    }
}

void toLowerCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower((unsigned char)str[i]);
    }
}

