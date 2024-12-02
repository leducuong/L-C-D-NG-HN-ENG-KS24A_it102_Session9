#include <stdio.h>

int main() {

    int arr[5] = {11, 12, 13, 14, 15};
    int n = 5; 
    int element, found = 0; 

    printf("Nhap phan tu can kiem tra: ");
    scanf("%d", &element);

    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            printf("vi tri cua phan tu nay la %d\n", i+1);
            found = 1; 
            break; 
        }
    }

    if (found == 0) {
        printf("phan tu ko ton tai trong mang\n");
    }

    return 0;
}
