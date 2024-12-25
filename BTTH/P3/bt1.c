// Nhập số phần tử và giá trị các phần tử của mảng một chiều số nguyên.
// In menu và thực hiện các chức năng theo menu .
//MENU
//1. In giá trị các phần tử của mảng
//2. Sử dụng Insertion Sort sắp xếp mảng giảm dần và in ra
//3. Sử dụng Selection Sort sắp xếp mảng tăng dần và in ra
//4. Sử dụng Bubble Sort sắp xếp mảng giảm dần và in ra
//5. Thoát

#include<stdio.h>

int main(){
    int arr[100], n, i, j, key, choice;
    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);

    do{
        printf("\n**********MENU********** \n");
        printf("1. in gia tri cac phan tu cua mang: \n");
        printf("2. Su dung insertion sort sap xep mang giam dan va in ra \n");
        printf("3. Su dung selection sort sap xep mang tang dan va in ra \n");
        printf("4. Su dung bubble sort sap xep mang giam dan va in ra \n");
        printf("5. Thoat\n");
        printf("Nhap lua chon cua ban:\t ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Cac phan tu trong mang \n");
                for( i = 0; i < n; i++){
                    printf("Gia tri phan tu arr[%d]: ", i);
                    scanf("%d", &arr[i]);
                }
                for(i=0; i < n; i++){
                    printf("Mang la: %d ", arr[i]);
                }
                printf("\n");

                break;
            case 2:
                printf("Mang giam dan bang insertion sort la: ");
                for(i = 1; i < n; i++){
                    key = arr[i];
                    j = i - 1;
                    while(j >= 0 && arr[j] < key){
                        arr[j + 1] = arr[j];
                        j = j - 1;
                    }
                    arr[j + 1] = key;
                }
                for( i=0; i < n; i++){
                    printf(" %d ", arr[i]);
                }
                break;
            case 3:
                printf("Mang tang dan bang selection sort: ");
                for(i = 0; i < n - 1; i++) {
                    int min = i;
                    for (j = i + 1; j < n; j++) {
                        if (arr[j] < arr[min]) {
                            min = j;
                            int temp = arr[min];
                            arr[min] = arr[i];
                            arr[i] = temp;
                        }
                    }
                }
                    for( i=0; i < n; i++){
                        printf(" %d ", arr[i]);
                    }
                break;
            case 4:
                printf("Mang giam dan bang bubble sort: ");
                for(i = 0; i < n - 1; i++){
                    for(j = 0 ; j < n-i-1 ; j++){
                        if(arr[j] < arr[j+1]){
                            int temp = arr[j];
                            arr[j] = arr[j+1];
                            arr[j+1] = temp;
                        }
                    }
                }
                    for(i=0; i < n; i++){
                        printf(" %d ", arr[i]);
                    }
                break;
            case 5:
                printf("Da thoat khoi chuong trinh. \n");
                break;
            default:
                printf("Su lua chon vau nhap chua dung! Yeu cau nhap lai. ");
        }
    } while(choice != 5);

    return 0;
}