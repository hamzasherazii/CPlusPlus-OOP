#include <iostream>
using namespace std;

void mult(int *x, int *y){
    int mult = *x * *y;
    cout << "Addresses: " << &x << " " << &y << endl;
    cout << "Multiplication: " << mult << endl;
}

int main(){
    int a, b;
    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;

    mult(&a, &b);
    return 0;
}