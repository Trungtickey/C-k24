// Nhập số phần tử của mảng (n), nhập giá trị các phần tử của mảng 1 chiều số nguyên gồm n phần tử.
// Nhập vào giá trị cần tìm kiếm trong mảng, in ra giá trị và chỉ số của phần tử đầu tiên tìm thấy trong mảng (trái sang phải).
// Sử dụng thuật toán tìm kiếm tuyến tính

#include<stdio.h>

int main(){
    int n;
    printf("nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap gia tri cac phan tu mang: \n");
    for(int i=0; i<n; i++){
        printf("Gia tri arr[%d]", i);
        scanf("%d", &arr[i]);
    }
    // Nhap gia tri can tim kiem
    int searchValue;
    printf("Nhap vao gia tri can tim trong mang: ");
    scanf("%d", &searchValue);

    // Duyệt mảng tìm chỉ số phần tử có giá trị bằng
    int flagSearched = 0; // Cờ đánh dấu không tìm thấy phần tử nào
    for(int i=0; i<n; i++){
        if(arr[i] == searchValue){
            flagSearched = 1; // Cờ tìm thấy phần tử trong mảng
            break;
        }
    }
    int i;
    // In giá trị phần tử và chỉ số phần tử tìm được
    if(flagSearched == 1){
        printf("Trong mảng có phần tử chỉ số %d có giá trị bằng %d \n", i, arr[i]);
    } else {
        printf("Khong tim thay phan tu có gia tri %d trong mang \n", searchValue);
    }
    return 0;
}