#include <iostream>
// using namespace std;

void Nhap(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        std::cout<<"Nhap a["<<i+1<<"] : ";
        std::cin>>a[i];
    }
}
void Xuat(int a[], int n){
    std::cout<<"Mang vua moi nhap la: "<<std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cout<<"a"<<i+1<<" = "<<a[i]<<std::endl;
    }
}
void swap(int &a, int &b){
    a = a + b;
    b = a - b;
    a = a - b;
}

void bubble_sort(int a[], int n){   
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j  < n - 1 - i; j  ++)
        {
            if (a[j]>a[j+1])
            {
                swap(a[j], a[j+1]);
            }
            
        }
    }
}

int main(){
    std::cout<<"Nhap n: ";
    int n;
    std::cin>>n;
    int*a = new int[n];
    if (a==nullptr)
    {
        std::cout<<"khong the cap phat bo nho, chuong trinh dung !";
        return 1;
    }
    
    Nhap(a, n);
    Xuat(a, n);
    // swap(a[0], a[1]);
    // Xuat(a,n);
    bubble_sort(a,n);
    Xuat(a,n);
    delete[] a;
    a=nullptr;
    return 0;
}