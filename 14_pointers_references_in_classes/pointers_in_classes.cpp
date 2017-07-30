#include <iostream>
using namespace std;

class Base{
public:
    const char* getName(){ return "Base"; } // nothing unusual here 
                                            // just an array to hold characters
};
class Derived : public Base{
public:
    const char* getName(){ return "Derived"; }
};

int main(){
    Base b;
    Derived d;

    cout << b.getName() << endl; // Base
    cout << d.getName() << endl; // Derived

    Derived &rd = d;
    cout << rd.getName() << endl; // Derived

    Derived *pd = &d;
    cout << pd->getName() << endl; // Derived

    Base &rb = d;
    cout << rb.getName() << endl; // Base

    Base *pb = &d;
    cout << pb->getName() << endl; // Base
}