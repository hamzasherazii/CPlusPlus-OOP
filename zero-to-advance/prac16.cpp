#include <iostream>
using namespace std;

int main(){
    int x;
    cout << "Enter the value of x: ";
    cin >> x;

    cout << "Address: " << &x << endl;
    cout << "Value: " << x << endl;

// ---------------------------------------------------------------------

    string y = "Hamza";
    cout << "Address: " << &y << endl;
    cout << "Name: " << y << endl;
    return 0;
}