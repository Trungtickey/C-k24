// thuat toan tim kiem tuyen tinh/ tuan tu
#include<stdio.h>
// bai toan : tim kiem va in ra vi tri cua gia tri 50 trong mang, neu ko ton tai thi in ra -1;
#include<stdlib.h>

int main(){
//	int array[100];
//
//	for(int i=0 ; i <100; i++){
//		array[i] = rand() % 100;
//	}

//
//	for(int i=0 ; i <100; i++){
//		printf("%d ",array[i]);
//	}

    // tim so n =50 trong mang
//	int indexFind = -1; // ko tim thay
//
//	for(int i = 0 ; i< 100 ; i++){
//		if(array[i] == 50){
//			indexFind = i;
//			break;
//		}
//	}
//	if(indexFind == -1){
//		printf("ko tim thay gia tri 50");
//	}else{
//		printf("tim thay gia tri 50 o vi tri %d", indexFind);
//	}

    // tim kiem nhi phan
//	for(int i = 0 ; i< 99; i++){
//		for(int j = 0;j< 99 - i; j++ ){
//			if(array[j] > array[j+1]){
//				int temp = array[j];
//				array[j] = array[j+1];
//				array[j+1] = temp;
//			}
//		}
//	}


//
//	for(int i=0 ; i <100; i++){
//		printf("%d ",array[i]);
//	}
//
//	int start, end, mid, indexFind = -1;
//	start = 0;
//	end = 99;
//	// tim mid = ?
//	while(start <= end){
//		mid = start + (end - start)/2;
//
//		if(50 == array[mid]){
//			printf("\nvào dây \n");
//			indexFind = mid;
//			break;
//		}else if(array[mid] < 50){
//			// ben phai mid
//			start = mid + 1;
//		}else{
//			// ben trai mid
//			end = mid -1;
//		}
//	}
//
//	if(indexFind == -1){
//		printf("ko tim thay gia tri 50");
//	}else{
//		printf("tim thay gia tri 50 o vi tri %d", indexFind);
//	}
//



    // nâng cao : sap xep kí tu
    // cho nguo dung nhap vao 1 chuoi
    // hay hien thi chuoi do ra man hinh theo thu tu chu cai a -> z

//	char str[10];
//	printf("Nhap du lieu cho chuoi");
//	gets(str);
////	printf("%s", str);
////	printf("\n%d", sizeof(str)/sizeof(char)); // 7
//	for(int i = 0; str[i] != '\0'; i++){
//		printf("%c\n", str[i]);
//	}
//
//	printf("\n%d", 'a'-'A'); //

    // lay diem
    int array[100] = {0}; // gia tri cac phan tu = ?
    array = &array[5]; // array là 1 bien mang : luu tru o nho cua phan tu dau tien

    for(int i=0; i< 100; i++){
        printf("%d ", array[i]); // C có co che thu gom rac ko
    }


    return 0;



}



// Sắp xếp kí tự
// Cho người dùng nhập vào 1 chuỗi
// Hãy hiện thị chuỗi đó ra màn hình theo thứ tự chữ cái a -> z

//#include<stdio.h>
//
//int main(){
//    char str[10];
//    printf("Nhap du lieu cho chuoi");
//    gets(str);
////    printf("%s", str);
////    printf("\n%d", sizeof(str)/sizeof(char));
//    for(int i = 0; str[i] = '\0'; i++){
//        printf("%c\n", str[i]);
//    }
//    printf("\n%d", 'a' - 'A');
//    return 0;
//}