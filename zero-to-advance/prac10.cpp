// friend function 
// passing object as a parameter

#include <iostream>
using namespace std;

class A{
    private:
    int number;
    friend int addFive(A);

    public:

    A(){
        number = 0;
    }
};

int addFive(A a){
    a.number += 6;
    return a.number;
};

int main(){
    A a1;
    cout << "Number: " << addFive(a1);
    return 0;
}