// Mô tả
//Khai báo và nhập dữ liệu cho một mảng một chiều các số nguyên.
//Viết các hàm để thực hiện các chức năng sau:
//Tính tổng các phần tử trong mảng.
//Tính giá trị trung bình của các phần tử trong mảng.
//In kết quả tính toán ra màn hình.
//3. Yêu cầu bài tập
//Viết hàm inputArray để nhập các giá trị cho mảng.
//Viết hàm sumArray để tính tổng các phần tử trong mảng.
//Viết hàm averageArray để tính giá trị trung bình của các phần tử trong mảng.
//Viết hàm printResults để in ra kết quả tính toán.

#include<stdio.h>
#define MAX 100
int arr[MAX];
int n = 0;
void inputArr(){
    int sum;
    float avg;
    // Nhập n
    printf("Nhap so luong phan tu cho mang n = ");
    scanf("%d", &n);
    // Nhập lần lượt giá trị cho mảng
    for(int i=0; i<n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", arr+i);
    }
};
int sumArr(){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum+= arr[i];
    }
    return sum;
}
float averageArr(){
    float avg = (float)sumArr()/n;
    return avg;
}
void printResults(int sum, float avg){
    printf("Tong cua cac phan tu trong mang la %d\n", sum);
    printf("Trung binh cong cua cac phan tu trong mang la %.2f\n", avg);
}

int main(){
    int sum;
    float avg;
    // Nhập mảng
    inputArr();

    // Tổng và trung bình cộng
    sum = sumArr();
    avg = averageArr();

    // in ra
    printResults(sum,avg);
    return 0;
}