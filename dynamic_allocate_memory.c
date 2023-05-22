#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Nhap n:");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("You cannot asssign the memory! This program will terminate!");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("mang vua moi nhap la: ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", *(arr + i));
    }
    int n1;
    printf("\nso luong phan tu ban muon them: ");
    scanf("%d", &n1);
    int *arr1 = (int *)malloc(n1 * sizeof(int));
    printf("\nNhap mang them: ");
    for (int i = 0; i < n1; i++)
    {
        printf("Nhap n%d: ", i + 1);
        scanf("%d", &arr1[i]);
    }
    int a;
    do
    {
        printf("\nVi tri ma ban muon them tai mang ban dau la: ");
        scanf("%d", &a);
        /* code */
    } while (a > n);

    free(arr);
    arr = NULL;
    printf("\nthe adreess that pointer arr is pointing is: %p", (void *)arr);
    return 0;
}