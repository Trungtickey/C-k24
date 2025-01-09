#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


// khai bao cac ham dung trong chuong trinh
void inputArray(int *ptr, int *size);
int sumArray(int *ptr, int size);
int findMax(int *ptr, int size);
void reverseString(char *str);

int main(int argc, char *argv[]) {
    int *arr;
    int n;
    inputArray(arr, &n);

    // in ra ket qua
    int i = 0;
    for(; i < n; i++){
        printf("%d\t", *(arr+i));
    }
    return 0;
}
// trien khai ham
void inputArray(int *ptr, int *size){
    // nhap kich thuoc
    printf("Nhap kich thuoc mang : ");
    scanf("%d", size);
    // cap phat dong
    ptr = (int *)malloc(*size*sizeof(int));
    // nhap du lieu cho tung phan tu
    int i =0;
    for(; i < *size; i++){
        printf("arr[%d] = ",i);
        scanf("%d", ptr+i);
    }
    // thu hoi
//	free(ptr);
};
int sumArray(int *ptr, int size);
int findMax(int *ptr, int size);
void reverseString(char *str);