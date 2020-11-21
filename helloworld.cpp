#include <iostream>
#include <vector>
#include <string>
#include "test1.hh"
#include "test2.hh"

using namespace std;

int main(int argc,char *argv[])
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
    
    testcomplex c1(2,1);
    testcomplex c2;
    testcomplex* p = new testcomplex(4);
    

    c1.printversion();
    cout<<endl;
    cout<<"c1:("<<c1.real()<<","<<c1.imag()<<")"<<endl;
    cout<<"c2:("<<c2.real()<<","<<c2.imag()<<")"<<endl;
    cout<<"c3:("<<p->real()<<","<<p->imag()<<")"<<endl;



    delete p;
    return 0;
}