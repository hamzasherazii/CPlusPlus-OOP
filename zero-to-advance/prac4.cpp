#include <iostream>
using namespace std;

class Rectangle{
    private:
    int width;
    int height;
    public:
    Rectangle(){
        width = 10;
        height = 5;
    }
    Rectangle(int w, int h){
        width = w;
        height = h;
    }

    int area(){
        return width * height;
    }
};

int main(){
    Rectangle r1;
    cout << "Default constructor called. Area: " << r1.area() << endl;

    Rectangle r2(20, 15);
    cout << "Constructor with parameters called. Area: " << r2.area() << endl;

    return 0;
}