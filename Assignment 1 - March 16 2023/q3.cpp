#include <iostream>
using namespace std;

class Circle {
private:
    float radius;
    float area;
public:
    void getRadius() {
        cout << "Enter RADIUS: ";
        cin >> radius;
    }
    void getArea() {
        area = 3.14 * radius * radius; // pi = 22/7 = 3.14
    }
    void displayResult() {
        cout << "The area of the circle with radius " << radius << " is " << area << endl;
    }
};

int main() 
{
    Circle myCircle;
    myCircle.getRadius();
    myCircle.getArea();
    myCircle.displayResult();
    return 0;
}
