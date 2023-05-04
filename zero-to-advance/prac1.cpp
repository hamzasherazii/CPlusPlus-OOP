// Wright a program that declares a class in one integer data member and two functions in() and out() to input and output data in data member.

#include <iostream>
using namespace std;

class myClass
{
private:
    int data;

public:
    void in()
    {
        cout << "Enter an integer: ";
        cin >> data;
    }
    void out()
    {
        cout << "The integer entered is " << data << endl;
    }
};

int main()
{
    myClass obj;
    obj.in();
    obj.out();
    return 0;
}