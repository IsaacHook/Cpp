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

    cout << b.getName() << endl;
    cout << d.getName() << endl;

    Derived &rd = d;
    cout << rd.getName() << endl;

    Derived *pd = &d;
    cout << pd->getName() << endl;

    Base &rb = d;
    cout << rb.getName() << endl;

    Base *pb = &d;
    cout << pb->getName() << endl;
}