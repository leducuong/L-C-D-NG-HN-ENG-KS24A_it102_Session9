#include <stdio.h>

int main() {
    int arr[100];
    int n, pos;
    printf("Nhap so phan tu muon nhap (toi da 100): ");
    scanf("%d", &n);
    if (n < 0 || n > 100) {
        printf("So luong phan tu khong hop le!\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Nhap vi tri muon xoa (0 - %d): ", n - 1);
    scanf("%d", &pos);
    if (pos < 0 || pos >= n) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }
}
