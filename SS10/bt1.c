// Khởi tạo và gán giá trị cho mảng bất kỳ, yêu cầu người dùng nhập vào phần tử bất kỳ và kiểm tra xem phần tử có tồn tại trong mảng không,
// in ra vị trí của phần tử đó.

#include<stdio.h>

// Hàm tìm kiếm phần tử trong mảng
int findElement(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i; // Trả về vị trí nếu tìm thấy
        }
    }
    return -1; // Trả về -1 nếu không tìm thấy
}


int main(){
    int arr[] = {7, 2, 9, 4, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int element;

    for(int i=0; i < n - 1; i++){
        for(int j=0; j < n - i - 1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Mang sau khi sap xep: ");
    for(int i = 0; i < n; i++){
        printf("%d", arr[i]);
    }

    printf("\n Nhap vao phan tu can kiem tra: ");
    scanf("%d", &element);

    // Tìm kiếm phần tử
    int position = findElement(arr, n, element);
    if (position != -1) {
        printf("Phan tu %d ton tai tai vi tri %d (sau khi sap xep).\n", element, position);
    } else {
        printf("Phan tu %d khong ton tai trong mang.\n", element);
    }

    return 0;
}