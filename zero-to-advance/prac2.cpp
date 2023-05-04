// Write a class Marks with three data members to store three marks. Write three member functions in() to input marks, sum() to calculate and return the sum and avg() to calculate and return the average marks.

#include <iostream>
using namespace std;

class Marks{
    private:
    int a, b, c;
    public:
    void in(){
        cout << "Enter 'a' marks: " << endl;
        cin >> a;

        cout << "Enter 'b' marks: " << endl;
        cin >> b;

        cout << "Enter 'c' marks: " << endl;
        cin >> c;
    }
    int sum(){
        return a+b+c;
    }
    float avg(){
        return sum() / 3;
    }   
};

int main(){
    Marks m1;
    int s;
    float a;
    m1.in();
    s = m1.sum();
    a = m1.avg();

    cout << "Sum: " << s << endl;
    cout << "Average: " << a << endl;
}