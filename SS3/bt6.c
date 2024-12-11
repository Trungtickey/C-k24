// Tính chu vi dien tich hinh tam giac
#include <stdio.h>

int main(){
    float a, h;
    printf("Do dai canh la: ");
    scanf("%f", &a);

    printf("Chieu cao hinh tam giac: ");
    scanf("%f", &h);


    printf("Chu vi hinh tam giac la: %.f\n", 3 * a );
    printf("Dien tich hinh tam giac la: %.f", 0.5 * (a * h));
    return 0;
}