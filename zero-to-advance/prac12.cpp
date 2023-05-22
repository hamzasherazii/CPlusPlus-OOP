// pointers in c++

#include <iostream>
using namespace std;

int main(){
    int a = 99;
    cout << &a << endl;
    cout << a << endl;

    int c = a + 2;
    cout << &c << endl;

    cout << "---------------------------------" << endl;

    int d = 2;
    int x;
    int *P;
    P = &d;
    cout << P << endl;
    cout << *P << endl;
    cout << sizeof(x);
}