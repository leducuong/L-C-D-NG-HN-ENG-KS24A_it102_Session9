#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n = 0, choice, pos, value;

    do {
        printf("\nMENU:\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu \n");
        printf("5. Xoa phan tu \n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
				break;
                printf("nhap so luong phan tu trong mang la: ");
                scanf("%d", &n);
                printf("Nhap cac phan tu trong mang la:\n");
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
                
                if (n < MAX_SIZE) {
                    printf("Nhap vi tri muon them(1 d?n %d): ", n + 1);
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
                        printf("Vi tri ko hop le.\n");
                    }
                } else {
                    printf("Mang da day ko the them phan tu.\n");
                }
                break;
            }

            case 4: {
                printf("Nhap vi tri can sua (1 d?n %d): ", n);
                scanf("%d", &pos);
                if (pos >= 1 && pos <= n) {
                    printf("Nhap gia tri moi cho arr[%d]: ", pos);
                    scanf("%d", &value);
                    arr[pos - 1] = value;  
                } else {
                    printf("vi tri ko hop le.\n");
                }
                break;
            }

            case 5: {
                printf("Nhap vi tri phan tu can xoa (1 d?n %d): ", n);
                scanf("%d", &pos);
                if (pos >= 1 && pos <= n) {
					                    for (int i = pos - 1; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;  
                } else {
                    printf("Vi tri ko hop le.\n");
                }
                break;
            }

            case 6: {
                printf("thoat chuong trinh.\n");
                break;
            }

            default: {
                printf("Lua chon ko hop le.\n");
                break;
            }
        }

    } while (choice != 6);

    return 0;
}
