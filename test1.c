#include <stdio.h>
int main(){
    int n;
    do
    {
        printf("vui long nhap N la so nguyen duong: ");
        scanf("%d", &n);
    } while (n<=0);
    printf("bien n vua nhap la: %d", n);
    printf ("\t oki la!");
    return 0;
}
