// Cho mảng đã sắp xếp int numbers[5] = [2,4,6,8,10], nhập vào một giá trị tìm kiếm (searchValue),
// in ra chỉ số và giá trị phần tử có giá trị bằng searchValue.
// Sử dung thuật toán tìm kiếm nhị phân

#include<stdio.h>

int main(){
    int arr[] = {2,4,6,3,5,7};
    int searchValue;
    printf("Nhap vao gia tri can tim kiem: ");
    scanf("%d", &searchValue);
    // Khai báo và khởi tạo giá trị chỉ số bắt đầu và kết thúc
    int start = 0;
    int end = sizeof(arr)/sizeof(arr[0]);
    // Sử dụng thuật toán tìm kiếm nhị phân tìm phần tử có giá trị là searchValue
    int mid;
    while(start<=end){
        mid = (start+end)/2;
        if(arr[mid] == searchValue){
            break;
        } else if(arr[mid] < searchValue){
            start = mid+1;
        } else {
            end = mid - 1;
        }
    }
    if(arr[mid] == searchValue){
        printf("Phan tu co chi so %d trong mang co gia tri %d\n ", mid, arr[mid]);
    } else{
        printf("Khong tim thay phan tu co gia tri %d trong mang \n", searchValue);
    }
    return 0;
}