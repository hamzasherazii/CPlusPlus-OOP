// multiple inheritance

#include <iostream>
using namespace std;

class A{
    public:
    show(){
        cout<<"A"<<endl;
    }
};
class B{
    public:
    show(){
        cout<<"B"<<endl;
    }
};
class C: public A, public B{
    public:
    show(){
        cout<<"C"<<endl;
    }
};

int main(){
    C i;
    i.A::show();
    i.B::show();
    return 0;
}