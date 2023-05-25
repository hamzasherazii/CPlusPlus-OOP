#include <iostream>
using namespace std;

class A{
    public:
    int a, b;
    void add(){
        cout << a + b;
    }
};

int main(){
    A a1, *pointer;
    pointer = &a1;
    pointer->a = 2;
    pointer->b = 3;
    pointer->add();
    return 0;
}
