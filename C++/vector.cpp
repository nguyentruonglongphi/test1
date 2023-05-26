#include <iostream>
#include <vector>

int main(){
    std::vector<int> v;
    v.push_back(3);
    std::cout<<*v.begin();
    return 0;

}