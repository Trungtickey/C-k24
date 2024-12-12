#include <stdio.h>


int main() {
    int a, b, c;
    printf("Nhap vao 3 canh cua tam giac: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        printf("Day la tam giac thuong");
    } else if(a == b && b == c){
        printf("day la tam giac deu");
    } else if(a + b == c || a + c == b || b + c == a){
        printf("Day la tam giac vuong can");
    } else if(a == b && a != c){
        printf("Day la tam giac can");
    } else{
        printf("Day khong phai 3 canh cua tam giac");
    }


    return 0;
}