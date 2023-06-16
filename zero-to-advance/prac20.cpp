// operator overloading

#include <iostream>
using namespace std;

class Test{
    int num;
    int num2;
    public: 
    Test(){
        num = 2;
        num2 = 3;
    }
    void operator++(){
        ++num;
        ++num2;
    }
    // void operator++(){
    //     ++num2;
    // }
    void display(){
        cout << num;
        cout << endl;
        cout << num2;
        cout << endl;
    }
};

int main(){
    Test t1, t2;
    ++t1;
    ++t2;
    t1.display();
    t2.display();
    return 0;
}