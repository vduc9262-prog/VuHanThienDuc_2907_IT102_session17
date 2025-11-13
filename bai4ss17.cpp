#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define MAX 500

void displayMenu();
void nhapChuoi(char str[], int size);
void nhapKyTu(char *c);
void xoaKyTu(char str[], char c);

int main() {
    char chuoi[MAX];
    char kyTuXoa;
    int luaChon;
    int i;

    for (i = 0; i < MAX; i++) {
        chuoi[i] = '\0';
    }

    do {
        displayMenu();
        printf(" => Chon chuc nang (1-4): ");
        scanf("%d", &luaChon);
        getchar();

        switch (luaChon) {
            case 1:
                nhapChuoi(chuoi, MAX);
                printf("\n Da nhap chuoi thanh cong!\n");
                break;

            case 2:
                if (chuoi[0] == '\0') {
                    printf("\n Chuoi trong! Chua nhap du lieu.\n");
                } else {
                    printf("\n Chuoi hien tai: %s\n", chuoi);
                }
                break;

            case 3:
                if (chuoi[0] == '\0') {
                    printf("\n Loi: Chua nhap chuoi! Hay chon 1 truoc.\n");
                } else {
                    nhapKyTu(&kyTuXoa);
                    xoaKyTu(chuoi, kyTuXoa);
                    printf("\n Da xoa tat ca ky tu '%c'\n", kyTuXoa);
                    printf(" Ket qua: %s\n", chuoi);
                }
                break;

            case 4:
                printf("\n Cam on ban da su dung chuong trinh!\n");
                printf(" Hen gap lai lan sau!\n\n");
                break;

            default:
                printf("\n Lua chon khong hop le! Chi chon tu 1 den 4.\n");
        }

        if (luaChon != 4) {
            printf("\n Nhan Enter de quay lai menu...");
            getchar();
        }

    } while (luaChon != 4);

    return 0;
}

void displayMenu() {
    system("cls");
    printf("==================================\n");
    printf("      XOA KY TU KHOI CHUOI        \n");
    printf("==================================\n");
    printf("1. Nhap chuoi moi\n");
    printf("2. Hien thi chuoi hien tai\n");
    printf("3. Xoa mot ky tu khoi chuoi\n");
    printf("4. Thoat chuong trinh\n");
    printf("----------------------------------\n");
}

void nhapChuoi(char str[], int size) {
    printf("Nhap vao mot chuoi bat ky: ");
    fgets(str, size, stdin);
    str[strcspn(str, "\n")] = '\0';
}

void nhapKyTu(char *c) {
    printf("Nhap ky tu can xoa: ");
    scanf("%c", c);
    getchar();
}

void xoaKyTu(char str[], char c) {
    int i = 0;
    int j = 0;

    while (str[i] != '\0') {
        if (str[i] != c) {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';
}

