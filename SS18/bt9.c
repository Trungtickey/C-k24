// Khai báo 1 cấu trúc Dish bao gồm các thuộc tính (id, name, price)
//Khai báo mảng cấu trúc struct Dish menu[100] có độ dài cố định là 100, có sẵn 5 phần tử trong đó. In menu và thực hiện các chức năng theo menu sau :
//
//
//
//MENU
//
//1. In ra giá trị các phần tử có trong menu món ăn theo dạng 1. member: value
//
//2. Thêm một phần từ vào vị trí chỉ định
//
//3. Sửa một phần từ ở vị trí chỉ định
//
//4. Xóa một phần từ ở vị trí chỉ định
//
//5. Sắp xếp các phần tử ( Khi lựa chọn menu cha thì hiển thị menu con )
//
//      a. Giảm dần theo price
//
//      b. Tăng dần theo price
//
//6. Tìm kiếm phần tử theo name nhập vào
//
//      a. Tìm kiếm tuyến tính
//
//      b. Tìm kiếm nhị phân
//
//7. Thoát

#include<stdio.h>
#include<string.h>

struct Dish{
    int id;
    char name[20];
    int price;
};

void swap(struct Dish *p1, struct Dish *p2){
    struct Dish temp = *p1;
    *p1 = *p2;
    *p2 = temp;
//    int tempId = p1 -> id;
//    p1 -> id = p2 -> id;
//    p2 -> id = tempId;
//
//    char *tempName = p1 -> name;
//    strcpy(p1 -> name, p2 -> name);
//    strcpy(p2 -> name, tempName);
}

void searchBinary(struct Dish *arr, char *name, int start, int end){
    while(start <= end){
        int mid = start + (end - start)/2;
        if(strcmp(name, (arr + mid) -> name) == 0){
            // Tìm thấy
            printf("Tim thay ten %s trong mang \n", name);
        } else if(strcmp(name, (arr + mid) -> name) < 0){
            // Tìm bên trái
            end = mid - 1;
        } else{
            // Tìm bên phải
            start = mid + 1;
        }
    }
    printf("Khong tim thay ten %s trong mang \n", name);
}

int main(){
    struct Dish d1 = {1,"Dish 1", 100};
    struct Dish d2 = {1,"Dish 2", 110};
    struct Dish d3 = {1,"Dish 3", 120};
    struct Dish d4 = {1,"Dish 4", 130};
    struct Dish d5 = {1,"Dish 5", 140};

    struct Dish array[5]={d1, d2, d3, d4, d5};// Literal
    // Giải thuật sắp xếp bubble sort
    // So sánh chuỗi strcmp

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4-i; j++){
            if(strcmp(array[j].name,array[j+1].name) > 0){
                // sai vị trí, đổi chỗ
//                struct Dish temp = array[j];
//                array[j] = array[j+1];
//                array[j+1] = temp;
               swap(&array[j], &array[j+1]);
            }
        }
    }

    // kiểm tra xem đã sắp xếp chưa

    for(int i = 0; i < 5; i++){
        printf("\t %s", array[i].name);
    }
    printf("\n");

    // Tìm kiếm nhị phân
    int start, end, mid;
    start = 0;
    end = 4;
    searchBinary(array, "Dish 3", start, end);

    return 0;
}
