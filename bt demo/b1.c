// Hãy tìm nghiệm của phương trình căn bậc 2

#include<stdio.h>
#include<math.h>

int main(){
    float a, b, c;
    // nhap a, b ,c
    scanf("%f%f%f", &a, &b, &c);

    // Tính delta
    float delta = b*b - 4*a*c;

    if(delta<0){
        printf("\n PT vô nghiệm");
    } else if(delta == 0){
        printf("PT co nghiem kep x = %.2f", (-b)/2*a);
    } else {
        printf("PT co nghiem x1 = %.2f", (-b-sqrt(delta))/(2*a));
        printf("PT co nghiem x1 = %.2f", (-b+sqrt(delta))/(2*a));
    }

    return 0;
}