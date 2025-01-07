// Khai báo và gán giá trị cho 1 chuỗi bất kỳ, viết chương trình viết hoa các chữ cái đầu của các từ trong chuỗi đó.

#include<stdio.h>
#include<string.h>
void Inhoachudau(char a[]){
    for(int i=0; i<strlen(a); i++){
        if(i==0|| (i>0 && a[i-1]==' ')){//neu la ky tu dau tien cua chuôi hoac ky tu ngay sau ky tu cach
            if(a[i]>='a' && a[i]<='z')//neu la ky tu viet thuong doi thanh viet hoa
                a[i]=a[i]-32;
        }else{
            //neu chu cai khong phai o dau moi tu viet hoa chuyen thanh viet thuong
            if(a[i]>='A' && a[i]<='Z'){
                a[i]=a[i]+32;
            }

        }
    }
}
int main(){
    char a[100];// khai bao chuoi a có toi da 100 ky tu
    printf("Nhap vao chuoi ky tu: ");
    gets(a);
    printf("\nChuoi vua nhap la: %s", a);
    Inhoachudau(a);
    printf("\nChuoi la: %s", a);

    return 0;
}