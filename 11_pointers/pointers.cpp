#include <iostream>
#include <typeinfo>
#include <cstddef>
using namespace std;

int main(){
    int value = 3;
    int* a = &value; // best practice when returning pointer from function
    int *b = &value; // bset practice when declaring pointer variable
    int * c = &value;

    cout << a << endl;
    cout << &value << endl;

    cout << *a << endl;

    int x(4);
    cout << typeid(&x).name() << endl; // returns Pi = pointer to intger

    *a = 7;
    cout << *a << endl;
    cout << *b << endl;

    int *p(nullptr);
    cout << p << endl;

    // nullptr_t ptr;
    // cout << ptr << endl;
}