#include<stdio.h>

int main(){
    // tao ma tran m x n trong do m là so hang , n là so cot
    // cho nguoi dung nhap lan luot tung gia tri tung ma tran và hien thi ma tran ra man hinh
    int m,n;
    printf("Hay nhap so hang cua ma tran m : ");
    scanf("%d",&m);
    printf("Hay nhap so cot cua ma tran n : ");
    scanf("%d",&n);
    int matrix[m][n];
    for(int i = 0 ; i<m ; i++ ){
        for(int j = 0 ; j<n ; j++ ){
            printf("Nhap matrix[%d][%d] : ",i,j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Các phan tu trong ma tran là :\n");

    for(int i = 0 ; i<m ; i++ ){
        for(int j = 0 ; j<n ; j++ ){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }


    // bai toan : hay cho nguoi dung nhap




    return 0;
}