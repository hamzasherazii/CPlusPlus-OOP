// friend class

#include <iostream>
using namespace std;

class myClass2;

class myClass1{
    private:
    int x;

    friend class myClass2;


    public: 
    myClass1() : x(2) {}

};
class myClass2{
    private:
    int y;

    public:
    myClass2() : y(3) {}

    int add(){
        myClass1 obj1;
        return obj1.x + y;
    }
};

int main(){
    myClass2 obj2;
    cout << "Sum: " << obj2.add();
    return 0;
}