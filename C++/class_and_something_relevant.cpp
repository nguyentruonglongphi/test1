#include <iostream>

class Dad{
public:
    virtual void say_the_name() = 0;
    virtual void do_the_work() = 0;
    virtual ~Dad(){}
};

class Son: public Dad{
public:
    virtual void say_the_name(){std::cout<<"my name is Son!";} 
    virtual void do_the_work(){std::cout<<"I'm doing something interested !";}    
    virtual ~Son(){}
};

int main(){
    Son son;
    son.say_the_name();
    std::cout<<"everything is ok !";
    return 0;
}