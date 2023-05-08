// bubble soft
#include <stdio.h>
#include <stdbool.h>
void swap(int *a, int *b){
    int tem;
    tem = *a;
    *a = *b;
    *b= tem;
}
void sort_from_min_to_max(int a[], int n){
    for (int i = 0; i < n - 1; i++)
    {
        bool Swap = false;
        for (int j= 0; j < n - i - 1; j++)
        {
            if (a[j]>a[j+1])
            {
                swap(&a[j], &a[j+1]);
                Swap = true;
            }
            
        }
        if(!Swap) break;
    }
    
}

int main(){
    int n, a[100];
    do
    {
        printf("vui long nhap N la so nguyen duong: ");
        scanf("%d", &n);
    } while (n<=0);
    for (int i = 0; i < n; i++)
    {
        printf("Nhap phan tu thu %d: ", i+1);
        scanf("%d", &a[i]);
    }
    sort_from_min_to_max(a,n);
    printf("Mang sau khi sap xep la: ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", a[i]);    
    }
    
    return 0;
}

