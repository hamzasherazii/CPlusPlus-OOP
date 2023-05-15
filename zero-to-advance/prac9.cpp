// constructors in inheritance

#include <iostream>
using namespace std;

class A{
    public:
    A(){
        cout<<"a"<<endl;
    }
};
class B{
    public:
    B(){
        cout<<"b"<<endl;
    }
};
class C: public A, public B{
    public:
    C(){
        cout<<"c"<<endl;
    }
};

int main(){
    C i;
    // i.B::B(); 
    return 0;
}