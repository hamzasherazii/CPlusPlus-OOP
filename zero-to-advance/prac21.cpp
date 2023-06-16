#include <iostream>
using namespace std;

class myBase
{
public:
    int myVar1;
    virtual void display()
    {
        cout << "1 Variable: " << myVar1 << endl;
    }
};

class myDerived: public myBase{
    public:
    int myVar2;
    void display(){
        cout << "2 Variable: " << myVar2 << endl;
    }
};

int main()
{
    myBase * base_pointer;
    myBase objBase;
    myDerived objDer;

    base_pointer = &objDer;
    base_pointer->display(); 

    base_pointer = &objBase;
    base_pointer -> display(); 
    return 0;
}