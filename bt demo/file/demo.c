#include<stdio.h>
#include<stdlib.h>

const char *DATE_PATH = "C:\\Users\\hp\\ClionProjects\\tickey learns C\\LearnCagain\\bt demo\\file\\demo.txt";

struct Date{
    int day, month, year
};

void readBinaryFile(){

}

void writeBinaryFile(){
    struct Date today = {24, 05, 2006};// struct literal
    // Thực hiện ghi ra file
    FILE *f = fopen(DATE_PATH, "wb");
    if(f == NULL){
        printf("Loi ko mo dc file");
        exit(1);
    }
    unsigned long long status = fwrite(&today, sizeof(struct Date), 1, f);
}

int main(int argc, char *argv[]){
    // Khi làm việc với FILE cần có thư viện nhập xuất
    // Bước 1: Mở File
    FILE *file; // Khai báo con trỏ làm việc với file

    // Mở file
    file = fopen("data.txt", "r");
    if(file == NULL){
        // Mở file thất bại
        printf("Lôĩ mở file");
        exit(1);
    }

    printf("Mo file thanh cong");

    // Bước 2: Thực hiện các thao tác với file
    // đọc dữ liệu: Đọc từng dòng
    char *text[255];
    int dem = 0;
    while(fgets(text, 255, file) != NULL){
        // In giá trị ra từng dòng
        printf("Dòng : %s\n", text);
        dem++;
    };
    printf("Dem = %d", dem);
//    int number = 10;
//    fprintf(file, "%d", number);
//
//    fscanf(file, "%d", &number);

    //fgets(text, 255, file);

    // In ra kết quả
    //printf("%s", text);
//    printf("%d", number);

// Đọc ghi nhị phân: fread và fwrite

int arr[] = {1,2, 3,4 , 5};

unsigned long long status = fread(arr, sizeof(int), 5, file);
    printf("Ket qua : %lld", status);

    for(int i = 0; i < 5; i++){

    }

//    unsigned long long status = fwrite(arr, sizeof(arr), 5, file);

    // Bước 3:
    fclose(file);
//    printf("Ket qua : %lld", status);
    return 0;
}