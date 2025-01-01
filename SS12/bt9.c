// Khai báo mảng số nguyên 2 chiều gồm n*m phần tử (n,m nhập từ bàn phím). In menu và thực hiện các chức năng theo menu sau :
//MENU
//
//1. Nhập giá trị các phần tử của mảng
//
//2. In giá trị các phần tử của mảng theo ma trận
//
//3. In ra các phần tử ở góc theo ma trận
//
//4. In ra các phần tử nằm trên đường biên theo ma trận
//
//5. In ra các phần tử nằm trên đường chéo chính và chéo phụ theo ma trận
//
//6. In ra các phần tử là số nguyên tố theo ma trận
//
//7. Thoát
#include<stdio.h>
#include<math.h>
#include<stdbool.h>


bool isPrime(int num){
    if(num < 2) return false;
    for(int i = 2; i * i <= num; i++){
        if(num % i == 0) return false;
    }
    return true;
}

void inputArr(int rows, int cols, int arr[rows][cols]){
    printf("Nhap cac phan tu cua mang: \n");
    for(int i=0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void printArray(int rows, int cols, int arr[rows][cols]){
    printf("Mang theo ma trạn: \n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
}

void printCorners(int rows, int cols, int arr[rows][cols]){
    printf("Cac phan tu o goc ma tran: \n");
    printf("%d %d\n", arr[0][0], arr[0][cols - 1]);
    printf("%d %d\n", arr[rows - 1][0], arr[rows - 1][cols - 1]);
}

// Hàm in các phần tử nằm trên đường biên
void printBorders(int rows, int cols, int arr[rows][cols]){
    printf("Cac phan tu tren duong bien: \n");
    // In hàng đầu tiên
    for(int j = 0; j < cols; j++){
        printf("%d", arr[0][j]);
    }
    // In cột cuối cùng(trừ hàng đầu tiên)
    for(int i = 1; i < rows; i++){
        printf("%d", arr[i][cols - 1]);
    }
    // In hàng cuối cùng(trừ cột cuối cùng)
    for(int j = cols - 2; j >= 0; j--){
        printf("%d", arr[rows - 1][j]);
    }
    // In cột đầu tiên(trừ hàng đầu tiên và hàng cuối cùng)
    for(int i = rows - 2; i > 0; i--){
        printf("%d", arr[i][0]);
    }
    printf("%\n");
}

// Hàm in các phần tử trên đường chéo chính và phụ
void printDiagonals(int rows, int cols, int arr[rows][cols]) {
    printf("Các phần tử trên đường chéo chính:\n");
    for (int i = 0; i < rows && i < cols; i++) {
        printf("%d ", arr[i][i]);
    }
    printf("\nCác phần tử trên đường chéo phụ:\n");
    for (int i = 0; i < rows && i < cols; i++) {
        printf("%d ", arr[i][cols - i - 1]);
    }
    printf("\n");
}

// Hàm in các phần tử là số nguyên tố
void printPrimes(int rows, int cols, int arr[rows][cols]) {
    printf("Các phần tử là số nguyên tố:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (isPrime(arr[i][j])) {
                printf("%d ", arr[i][j]);
            }
        }
    }
    printf("\n");
}
int main(){
    int rows, cols, choice;
    printf("Nhap so hang row = ");
    scanf("%d", &rows);
    printf("Nhap so cot col = ");
    scanf("%d", &cols);

    int arr[rows][cols];
    do{
        printf("MENU\n");
        printf("1. Nhap gia tri cac phan tu mang \n");
        printf("2. In gia tri cac phan cua mang theo ma tran \n");
        printf("3. In ra cac phan tu o goc theo ma tran \n");
        printf("4. In ra cac phan tu nam tren duong bien theo ma tran \n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran \n");
        printf("6. In ra cac phan tu la so nguyen to theo ma tran \n");
        printf("7. Thoat");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                inputArr(rows, cols, arr);
                break;
            case 2:
                printArray(rows, cols, arr);
                break;
            case 3:
                printCorners(rows, cols, arr);
                break;
            case 4:
                printBorders(rows, cols, arr);
                break;
            case 5:
                printDiagonals(rows, cols, arr);
                break;
            case 6:
                printPrimes(rows, cols, arr);
                break;
            case 7:
                printf("Thoát chương trình.\n");
                break;
            default:
                printf("Lựa chọn không hợp lệ. Vui lòng chọn lại.\n");
        }
    }while(choice != 7);


    return 0;
}