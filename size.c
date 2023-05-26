#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
int make_number(){
    static int a = 1000;
    return a++;
}
extern void Nhap(int[], int);
extern void Xuat(int[], int);
typedef struct{
    unsigned int ngay : 5;
    unsigned int thang : 4;
    unsigned int nam : 12;
}time; 

int main(){
    printf("Thi sinh a co so bao danh la : %d\n", make_number());
    printf("Thi sinh c co so bao danh la : %d\n", make_number());
    printf("Thi sinh b co so bao danh la : %d\n", make_number());
    printf("Thi sinh c co so bao danh la : %d\n", make_number());
    printf("Thi sinh a co so bao danh la : %d\n", make_number());
    printf("Thi sinh c co so bao danh la : %d\n", make_number());
    printf("Thi sinh b co so bao danh la : %d\n", make_number());
    printf("Thi sinh c co so bao danh la : %d\n", make_number());
}
