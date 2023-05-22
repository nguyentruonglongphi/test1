#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int a;
    char c;
    int n;
}my_truct; 
typedef union{
    int a;
    char c;
    int n;
}my_union; 


int main(){
    my_truct mystruct;
    mystruct.c = 10; 
    printf("---struct---\n");
    // printf("bien a: %d\n", mystruct.a);
    printf("bien n: %d\n", mystruct.n);
    return 0;
}
