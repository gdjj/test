#ifndef _TEST1_HH_
#define _TEST1_HH_
#include <iostream>
using namespace std;
class testcomplex{

public:
    testcomplex(double r = 0,double i = 0)
        : re(r),im(i)
    {cout<<"这是testcomplex类的构造函数。"<<endl;}
    ~testcomplex()
    {}
    inline testcomplex& 
    __doapl(testcomplex* ths,const testcomplex& r)
    {   ths->re += r.re;
        ths->im += r.im;
        return *ths;
     }
    testcomplex& operator += (const testcomplex& r)
    {  return __doapl(this,r); }
    double real() const{ return re; }
    double imag() const{  return im;  }
    void printversion(void);
private:
    double re,im;
};


#endif