#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define MAX 500

void nhapChuoi(char str[], int size, char ten[]);
void noiChuoiThuCong(char str1[], char str2[]);
void displayMenu();

int main() {
    char chuoi1[MAX] = "";
    char chuoi2[MAX] = "";
    char ketQua[MAX] = "";
    int luaChon;

    do {
        displayMenu();
        printf(" => Chon chuc nang (1-4): ");
        scanf("%d", &luaChon);
        getchar();

        if (luaChon == 1) {
            nhapChuoi(chuoi1, MAX, "chuoi THU NHAT");
            nhapChuoi(chuoi2, MAX, "chuoi THU HAI");
            printf("\n Da nhap xong 2 chuoi!\n");
        }
        else if (luaChon == 2) {
            if (chuoi1[0] == '\0' || chuoi2[0] == '\0') {
                printf("\n Loi: Chua nhap du 2 chuoi!\n");
            } else {
                strcpy(ketQua, chuoi1);
                strcat(ketQua, chuoi2);
                printf("\n Noi bang ham strcat:\n");
                printf(" Ket qua: %s\n", ketQua);
            }
        }
        else if (luaChon == 3) {
            if (chuoi1[0] == '\0' || chuoi2[0] == '\0') {
                printf("\n Loi: Chua nhap du 2 chuoi!\n");
            } else {
                strcpy(ketQua, chuoi1);
                noiChuoiThuCong(ketQua, chuoi2);
                printf("\n Noi bang vong lap (thu cong):\n");
                printf(" Ket qua: %s\n", ketQua);
            }
        }
        else if (luaChon == 4) {
            printf("\n Cam on ban da su dung chuong trinh!\n");
            printf(" Tam biet!\n\n");
        }
        else {
            printf("\n Lua chon khong hop le! Chi chon 1-4.\n");
        }

        if (luaChon != 4) {
            printf("\n Nhan Enter de tiep tuc...");
            getchar();
        }

    } while (luaChon != 4);

    return 0;
}

void displayMenu() {
    system("cls");
    printf("==================================\n");
    printf("     CHUONG TRINH NOI CHUOI       \n");
    printf("==================================\n");
    printf("1. Nhap 2 chuoi\n");
    printf("2. Noi chuoi bang strcat\n");
    printf("3. Noi chuoi bang vong lap (thu cong)\n");
    printf("4. Thoat\n");
    printf("----------------------------------\n");
}

void nhapChuoi(char str[], int size, char ten[]) {
    printf("Nhap %s: ", ten);
    fgets(str, size, stdin);
    str[strcspn(str, "\n")] = '\0';
}

void noiChuoiThuCong(char str1[], char str2[]) {
    int i = 0;
    int j = 0;

    while (str1[i] != '\0') {
        i++;
    }

    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
}

