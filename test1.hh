#ifndef _TEST1_HH_
#define _TEST1_HH_
#include <iostream>
class testcomplex{

public:
    testcomplex(double r = 0,double i = 0)
        : re(r),im(i)
    {}
    ~testcomplex()
    {}
    testcomplex& operator += (const testcomplex&);
    double real() const{ return re; }
    double imag() const{  return im;  }

private:
    double re,im;
};


#endif