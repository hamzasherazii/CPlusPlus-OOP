// pointers and functions

#include <iostream>
using namespace std;

void add(int *x, int *y){
    int sum = *x + *y;
    cout << "Sum: " << sum;
}

int main()
{
    int a, b;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;

    add(&a, &b);
    return 0;
}