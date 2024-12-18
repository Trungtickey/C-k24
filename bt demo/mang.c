#include <stdio.h>
// Có 2 cách khai báo hằng số
// #dèine MAX_SIZE = 10;
// const MAX = 10;


int main(){
    int n;
    printf("Nhap so luong phan tu mang muon them: ");
    scanf("%d", &n);

    // Khai báo mảng
    int arrayInt[n];

    printf("Gia tri cua o nho truoc array[0] 2 o la: %d", *(arrayInt - 2));

    // nhập giá trị cho từng phần tử
    for(int index = 0; index < n; index++){
//        printf("%p ", arrayInt[index]);
        printf("Nhap gia tri cho phan tu arrayInt[%d] = ", index);
        scanf("%d", &arrayInt[index]); // hay dùng hơn
    }

    // Tính tổng và trung bình cộng
    int sum = 0;
    for(int index = 0; index < n; index++){
        sum += arrayInt[index];
    }
    printf("\n Tong: %d", sum);
    printf("\n Trung binh: %.2f", ((float)sum)/n);
}