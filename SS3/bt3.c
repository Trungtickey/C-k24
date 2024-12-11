
#include <stdio.h>

int main(){
    float Pi = 3.14, bkht;
    printf("Ban kinh hinh tron: ");
    scanf("%f", &bkht);


    printf("Chu vi hinh tron la: %.f\n", 2 * Pi + bkht);
    printf("Dien tich hinh tron la: %.2f", Pi * bkht * bkht);
    return 0;
}