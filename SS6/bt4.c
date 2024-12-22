// Viết chương trình yêu cầu người dùng nhập vào 3 số a, b, c, giải phương trình bậc 2 : ax^2 + bx + c = 0 và in kết quả ra màn hình.

#include<stdio.h>
#include<math.h>

int main(){
    float a,b,c;
    printf("nhap 3 so a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);

    // Tinh delta
    float delta = b*b - 4*a*c;

    if(delta < 0){
        printf("\n PT vô nghiệm");
    } else if(delta == 0){
        printf("PT co nghiem kep x = %.2f", (-b)/2*a);
    } else {
        printf("PT co nghiem x1 = %.2f", (-b-sqrt(delta))/(2*a));
        printf("PT co nghiem x2 = %.2f", (-b+sqrt(delta))/(2*a));
    }
}