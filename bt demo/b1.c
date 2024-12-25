// Hãy tìm nghiệm của phương trình căn bậc 2

#include<stdio.h>
#include<math.h>

int main(){
    int i = 0;
    while (i < 5) { printf("%d ", i++); i += 2; }
    return 0;
//    float a, b, c;
//    printf("Nhap vao 3 so a, b, c: ");
//    scanf("%f%f%f", &a, &b, &c);
//
//    // Tính delta
//    float delta = b*b - 4*a*c;
//
//    if(delta<0){
//        printf("\n PT vo nghiem");
//    } else if(delta == 0){
//        printf("PT co nghiem kep x = %.2f", (-b)/2*a);
//    } else {
//        printf("PT co nghiem x1 = %.2f", (-b-sqrt(delta))/(2*a));
//        printf("PT co nghiem x2 = %.2f", (-b+sqrt(delta))/(2*a));
//    }

    return 0;
}