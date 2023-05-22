// operations on pointers

#include <iostream>
using namespace std;

int main(){
    int var[5] = {1, 2, 3, 4, 5};
    int *p = var;
    cout << "Address: " << p << endl;

    cout << *p << endl;
    p++;
    cout << *p << endl;
    cout << *(p+1) << endl;
    p--;
    cout << *p << endl;
}