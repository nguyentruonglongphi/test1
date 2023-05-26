#include <stdio.h>
void Nhap(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("Nhap phan tu thu %d :", i+1);
        scanf ("%d", &a[i]);
    }    
}   
void Xuat(int a[], int n){
    printf("Mang vua nhap la: ");
    for (int i = 0; i < n; i++)
{
        printf("\na[%d] = %d", i, a[i]);
    }    
}
