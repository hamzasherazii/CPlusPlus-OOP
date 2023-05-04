// Function overloading 

#include <iostream>
using namespace std;

class MyClass{
    public:
    int sum(int a, int b){
        return a + b;
    }
    float sum(float a, float b){
        return a + b;
    }
};

int main(){
    MyClass obj;
    int a = 10, b = 20;
    float c = 2.5, d = 3.5;

    cout << "Sum of " << a << " and " << b << " is " << obj.sum(a, b) << endl;
    cout << "Sum of " << c << " and " << d << " is " << obj.sum(c, d) << endl;

    return 0;
}