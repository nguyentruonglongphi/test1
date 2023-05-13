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
int main(){
    int a[100], n;
    do
    {
        printf("Vui long nhap n > 0: ");
        scanf("%d", &n);
    } while (n<=0);
    Nhap(a,n);
    Xuat(a,n);
    return 0;
}