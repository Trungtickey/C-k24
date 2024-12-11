#include <stdio.h>

int main(){
    float Celsius, Fahrenheit;
    printf("Nhap vao do C:");
    scanf("%f", &Celsius);

    Fahrenheit = (Celsius * 9 / 5) + 32;
    printf("Nhiet do khi doi ve F la: %.2f", Fahrenheit);

    return 0;
}