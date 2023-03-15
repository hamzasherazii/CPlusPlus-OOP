#include <iostream>
using namespace std;

class Rectangle{
    float height;
    float width;

    public:
    void inputDetail(){
        cout << "Enter height: ";
        cin >> height;
        cout << "Enter width: ";
        cin >> width;
    }
    void findArea(){
        float area = height * width;
        cout << "Area: " << area;
    }
};


int main()
{
    // cout << "Testing compiler";

    Rectangle area;
    area.inputDetail();
    area.findArea();

    return 0;
}