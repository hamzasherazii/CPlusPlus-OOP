#include <iostream>
using namespace std;


class baseClass{
    protected:
    int x;

    public:
    virtual void display() = 0;

    baseClass(int i){
        x = i;
        cout << "Constructor of base called!" << endl;
    }
};

class derivedClass: public baseClass{
    int y;
    public:

    derivedClass(int i, int j) : baseClass(i){
        y = j;
        cout << "Constructor of derived called!" << endl;
    }

    void display(){
        cout << "X = " << x << endl;
        cout << "Y = " << y << endl;
    }
};

int main(){
    derivedClass objDer(2, 3);
    objDer.display();

    baseClass * ptr_base;
    ptr_base = &objDer;   
    return 0;
}