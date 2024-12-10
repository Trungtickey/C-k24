// tính chu vi, diện tích hình tròn

#include <stdio.h>

int main(){
    float Pi = 3.14, bkht;
    printf("Ban kinh hinh tron: ");
    scanf("%f", &bkht);


    printf("Chu vi hinh vuong la: %.f\n", 2 * Pi + bkht);
    printf("Dien tich hinh vuong la: %.f", Pi * bkht * bkht);
    return 0;
}