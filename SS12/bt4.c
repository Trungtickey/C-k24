// Xây dựng hàm có tham số là một mảng số nguyên bất kỳ, kết quả trả về là số lớn nhất trong mảng truyền vào.

#include<stdio.h>
int largest(int arr[], int lenght){
    int max = arr[0]; // Giả sử phần tử đầu tiên là lớn nhất
    for(int i=1; i<lenght; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int arr[] = {2,4,6,8,3,5,7};
    int lenght = sizeof(arr)/sizeof(int);

    int soLonNhat = largest(arr,lenght);

    printf("So lon nhat la: %d", soLonNhat);

    return 0;
}