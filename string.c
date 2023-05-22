#include <stdio.h>
#include <string.h>
#include <time.h>
int main(){
    time_t start, end;
    start = clock();
    int a =5;
    int b;
    b +=a;
    printf("Gia tri cua bien b la: %d", b);
    end = clock();
    printf("\nthoi gian thuc hien doan ma tinh theo giay la: %.2f", ((double)(end-start)/CLOCKS_PER_SEC));
    return 0;
}