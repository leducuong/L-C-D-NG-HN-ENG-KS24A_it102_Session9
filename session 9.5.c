#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n = 0, choice, pos, value, sum, primeCount, count;

    do {
        printf("\nMENU:\n");
        printf("1. Nhap vao mang\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. In ra gia tri cac phan tu chan va tinh tong\n");
        printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
        printf("5. In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
        printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n");
        printf("7. Them mot phan tu vao vi tri chi dinh\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                printf("Nhap so luong phan tu trong mang: ");
                scanf("%d", &n);
                printf("Nhap cac phan tu cua mang:\n");
                for (int i = 0; i < n; i++) {
                    printf("arr[%d]: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;
            }

            case 2: {
                printf("Gia tri cac phan tu trong mang la:\n");
                for (int i = 0; i < n; i++) {
                    printf("arr[%d] = %d\n", i + 1, arr[i]);
                }
                break;
            }

            case 3: {
                sum = 0;
                printf("Các ph?n t? ch?n trong m?ng là:\n");
                for (int i = 0; i < n; i++) {
                    if (arr[i] % 2 == 0) {
                        printf("arr[%d] = %d\n", i + 1, arr[i]);
                        sum += arr[i];
                    }
                }
                printf("Tong cac phan tu chan la: %d\n", sum);
                break;
            }

            case 4: {
                int max = arr[0], min = arr[0];
                for (int i = 1; i < n; i++) {
                    if (arr[i] > max) max = arr[i];
                    if (arr[i] < min) min = arr[i];
                }
                printf("Gia tri lon nhat trong mang la: %d\n", max);
                printf("Gia tri nho nhat trong mang la: %d\n", min);
                break;
            }

            case 5: {
                primeCount = 0;
                sum = 0;
                printf("Cac phan tu la so nguyen to trong mang la:\n");
                for (int i = 0; i < n; i++) {
                    int is_prime = 1;
                    if (arr[i] <= 1) {
                        is_prime = 0;
                    } else {
                        for (int j = 2; j <= sqrt(arr[i]); j++) {
                            if (arr[i] % j == 0) {
                                is_prime = 0;
                                break;
                            }
                        }
                    }

                    if (is_prime) {
                        printf("arr[%d] = %d\n", i + 1, arr[i]);
                        sum += arr[i];
                        primeCount++;
                    }
                }
                printf("Tong cac so nguyen to trong mang la: %d\n", sum);
                break;
            }

            case 6: {
                printf("Nhap so can thong ke: ");
                scanf("%d", &value);
                count = 0;
                for (int i = 0; i < n; i++) {
                    if (arr[i] == value) {
                        count++;
                    }
                }
                printf("So %d xuat hien %d lan trong mang.\n", value, count);
                break;
            }

            case 7: {
                if (n < MAX_SIZE) {
                    printf("Nhap vi tri muon them (1 den %d): ", n + 1);
                    scanf("%d", &pos);
                    if (pos >= 1 && pos <= n + 1) {
                        printf("Nhap gia tri muon them: ");
                        scanf("%d", &value);
                        for (int i = n; i >= pos; i--) {
                            arr[i] = arr[i - 1];
                        }
                        arr[pos - 1] = value;
                        n++;
                    } else {
                        printf("Vi tri khong hop le.\n");
                    }
                } else {
                    printf("Mang da day, khong the them phan tu.\n");
                }
                break;
            }

            case 8: {
                printf("Thoat chuong trinh.\n");
                break;
            }

            default: {
                printf("Lua chon khong hop le, vui long thu lai.\n");
                break;
            }
        }

    } while (choice != 8);

    return 0;
}
