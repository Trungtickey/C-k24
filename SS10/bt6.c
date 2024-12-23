// Khởi tạo và gán giá trị cho mảng số nguyên bất kỳ, yêu cầu người dùng nhập vào 1 số nguyên bất kỳ và sử dụng thuật toán tìm kiếm tuyến tính để tìm vị trí của phần tử đó trong mảng.
// Nếu có nhiều phần tử trùng với số đã nhập thì lưu tất cả vị trí tìm được vào một mảng và in tất cả vị trí đó ra màn hình.

#include<stdio.h>

int main(){
    int arr[]={2,4,6,3,5,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target, positions[n], count = 0;

    printf("Gia tri mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n Nhap phan tu can kiem tra: ");
    scanf("%d", &target);

    for(int i = 0; i < n; i++){// Tìm tuyến tính và lưu vị trí các phần tử trùng vào mảng position
        if(arr[i] == target){
            positions[count] = i;// lưu vị trí
            count++; // Tăng số lượng phần tử trùng
        }
    }

    if (count > 0) {
        printf("Phan tu %d xuat hien tai cac vi tri: ", target);
        for (int i = 0; i < count; i++) {
            printf("%d ", positions[i]);
        }
        printf("\n Tong so lan xuat hien: %d\n", count);
    } else {
        printf("Phan tu %d khong ton tai trong mang.\n", target);
    }

    return 0;
}