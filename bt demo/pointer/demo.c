#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


// khai bao cac ham dung trong chuong trinh
void inputArray(int *ptr, int size);
int sumArray(int *ptr, int size);
int findMax(int *ptr, int size);
void reverseString(char *str);

int main(int argc, char *argv[]) {
//	int *arr; // con tro NULL
//	int n =0;
//	printf("Nhap kich thuoc mang : ");
//	scanf("%d", &n);
//	arr = (int *) malloc(n * sizeof(int)); // cap phat ban dau
//	inputArray(arr, n);
//
//	// in ra ket qua
//	printf("%d", n);
//	for(int i = 0; i < n; i++){
//		printf("%d\t", *(arr+i));
//	}
//	int sum =  sumArray(arr,n);
//	int max = findMax(arr, n);
//	printf("\nTong = %d  vaf max = %d\n",sum,max) ;
//	free(arr);

    char str[] = "Rikkei academy";
    reverseString(str);

    printf("%s", str);
    return 0;
}
// trien khai ham
void inputArray(int *ptr, int size){
    // nhap kich thuoc

//	// cap phat dong
//	ptr = (int *)malloc((*size)*sizeof(int));
    // nhap du lieu cho tung phan tu
    for(int i =0; i < size; i++){
        printf("arr[%d] = ",i);
        scanf("%d", ptr+i);
    }
    // thu hoi
//	free(ptr);
};
int sumArray(int *ptr, int size){
    int sum = 0;
    for(int i =0; i < size; i++){
        sum+= *(ptr+i);
    }
    return sum;
};
int findMax(int *ptr, int size){
    int max = *ptr;
    for(int i = 1; i < size; i++){
        if(max < *(ptr+i)){
            max = *(ptr+i);
        }
    }
    return max;
};
void reverseString(char *str){
    strrev(str);
};