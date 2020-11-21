#ifndef _TEST2_HH_
#define _TEST2_HH_
#include <iostream>
class test2{
public:
    test2(int input)
    :a(input)
    {std::cout<<"这是test2类的构造函数"<<std::endl;}
private:
    int a;

};
#endif