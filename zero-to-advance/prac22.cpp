#include <iostream>
using namespace std;

class myBase{
    int x;
    public:
    virtual void display() = 0;
};

class myDerived: public myBase{
    int y;
    public:
    void display(){
        cout << "Function called!";
    }
};

int main(){
    myBase * base_pointer;
    myDerived objDer;

    base_pointer = &objDer;
    base_pointer->display();  
    return 0;
}