// Khởi tạo và gán giá trị cho mảng số nguyên bất kỳ, hãy sử dụng thuật toán sắp xếp bất kỳ để sắp xếp lại mảng theo thứ tự tăng dần.
// Yêu cầu người dùng nhập vào 1 số nguyên bất kỳ và sử dụng thuật toán tìm kiếm nhị phân để tìm vị trí của phần tử đó trong mảng.

#include<stdio.h>

// Hàm tìm kiếm nhị phân
int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Tìm thấy phần tử
        } else if (arr[mid] < target) {
            left = mid + 1; // Dịch trái sang phải
        } else {
            right = mid - 1; // Dịch phải sang trái
        }
    }
    return -1; // Không tìm thấy phần tử
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

    // Tìm kiếm phần tử bằng binarySearch
    int position = binarySearch(arr, n, element);
    if (position != -1) {
        printf("Phần tử %d tồn tại tại vị trí %d (trong mảng đã sắp xếp).\n", element, position);
    } else {
        printf("Phần tử %d không tồn tại trong mảng.\n", element);
    }

    return 0;
}