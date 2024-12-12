#include <stdio.h>
int main(){
    int number, thousandDigit, hundredDigit, dozenDigit, unitDigit, sum;
    printf("Nhap so nguyen co 4 chu so: ");
    scanf("%d", &number);
   // Tách các chữ số:
   thousandDigit = number / 1000;
   hundredDigit = (number % 1000) / 100;
   dozenDigit = (number % 100) / 10;
   unitDigit = number % 10;
   sum = thousandDigit + hundredDigit + dozenDigit + unitDigit;

   printf("Tong 4 chu so la: %d", sum);

        return 0;
}
