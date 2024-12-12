#include <stdio.h>

int main(){
    int a, b, c;
    printf("Moi nhap so thu nhat a: ");
    scanf("%d", &a);
    printf("Moi nhap so thu hai b: ");
    scanf("%d", &b);
    printf("Moi nhap so thu ba c: ");
    scanf("%d", &c);

    if( a < b && b < c ){
        printf("so b %d nam giua hai so %d va %d", b, a, c);
    } else {
        printf("so b %d khong nam giua hai so %d va %d", b, a, c);
    }

    return 0;
}