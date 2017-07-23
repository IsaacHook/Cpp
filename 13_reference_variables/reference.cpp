#include <iostream>
using namespace std;

// used normally in functions
void func(int &ref){
    ref = 6;
}

int main(){
    int value = 5;
    int &ref = value;   // does not mean address of
                        // measns reference to
                        // just an alias
    cout << value << endl;
    ref = 87;
    cout << value << endl;
    cout << &value << endl; // address of variable
    cout << &ref << endl; // address of reference

    // referebces cannot be re-assigned
    int value2 = 34;
    ref = value2;
    cout << value << endl; // value assigned value of value2

    func(value);
    cout << value << endl; // value assigned value of value2

}