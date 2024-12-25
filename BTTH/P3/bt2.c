// Nhập số phần tử và giá trị các phần tử của mảng hai chiều số nguyên.
// In menu và thực hiện các chức năng theo menu .
//MENU
//1. In giá trị các phần tử của mảng
//2. Sử dụng Insertion Sort sắp xếp mảng giảm dần và in ra
//3. Sử dụng Selection Sort sắp xếp mảng tăng dần và in ra
//4. Sử dụng Bubble Sort sắp xếp mảng giảm dần và in ra
//5. Thoát

#include <stdio.h>

// Hàm hoán đổi hai giá trị
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Hàm sắp xếp mảng 1D bằng Insertion Sort (giảm dần)
void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] < key) { // Giảm dần
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Hàm sắp xếp mảng 1D bằng Selection Sort (tăng dần)
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) { // Tăng dần
                minIndex = j;
            }
        }
        swap(&arr[i], &arr[minIndex]);
    }
}

// Hàm sắp xếp mảng 1D bằng Bubble Sort (giảm dần)
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) { // Giảm dần
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

// Hàm chuyển mảng 2D sang mảng 1D
void convert2DTo1D(int rows, int cols, int arr2D[rows][cols], int arr1D[]) {
    int index = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr1D[index++] = arr2D[i][j];
        }
    }
}

// Hàm chuyển mảng 1D ngược về mảng 2D
void convert1DTo2D(int rows, int cols, int arr1D[], int arr2D[rows][cols]) {
    int index = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr2D[i][j] = arr1D[index++];
        }
    }
}

// Hàm in mảng 2D
void print2DArray(int rows, int cols, int arr[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    printf("Nhap so dong: ");
    scanf("%d", &rows);
    printf("Nhap so cot: ");
    scanf("%d", &cols);

    int arr2D[rows][cols];
    int arr1D[rows * cols];

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr2D[i][j]);
        }
    }

    int choice;

    do {
        printf("\nMENU\n");
        printf("1. In gia tri cac phan tu cua mang\n");
        printf("2. Su dung Insertion Sort sap xep mang giam dan va in ra\n");
        printf("3. Su dung Selection Sort sap xep mang tang dan va in ra\n");
        printf("4. Su dung Bubble Sort sap xep mang giam dan va in ra\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nMang hien tai:\n");
                print2DArray(rows, cols, arr2D);
                break;

            case 2:
                convert2DTo1D(rows, cols, arr2D, arr1D);
                insertionSort(arr1D, rows * cols);
                convert1DTo2D(rows, cols, arr1D, arr2D);
                printf("\nMang sau khi sap xep giam dan (Insertion Sort):\n");
                print2DArray(rows, cols, arr2D);
                break;

            case 3:
                convert2DTo1D(rows, cols, arr2D, arr1D);
                selectionSort(arr1D, rows * cols);
                convert1DTo2D(rows, cols, arr1D, arr2D);
                printf("\nMang sau khi sap xep tang dan (Selection Sort):\n");
                print2DArray(rows, cols, arr2D);
                break;

            case 4:
                convert2DTo1D(rows, cols, arr2D, arr1D);
                bubbleSort(arr1D, rows * cols);
                convert1DTo2D(rows, cols, arr1D, arr2D);
                printf("\nMang sau khi sap xep giam dan (Bubble Sort):\n");
                print2DArray(rows, cols, arr2D);
                break;

            case 5:
                printf("Da thoat chuong trinh.\n");
                break;

            default:
                printf("Lua chon khong hop le, vui long chon lai.\n");
        }
    } while (choice != 5);

    return 0;
}
