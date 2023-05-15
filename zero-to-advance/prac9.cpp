// constructors in inheritance

#include <iostream>
using namespace std;

class A{
    public:
    A(){
        cout<<"a"<<endl;
    }
};
class B: public A{
    public:
    B(){
        cout<<"b"<<endl;
    }
};

int main(){
    B i;
    // i.a();  
    return 0;
}