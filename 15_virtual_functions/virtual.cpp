#include <iostream>

class Base
{
public:
    virtual const char* getName() { return "Base"; } // note addition of virtual keyword
};
 
class Derived: public Base
{
public: // virtual resolves to most derived version of function
    virtual const char* getName() { return "Derived"; }
};
 
int main()
{
    Derived derived;
    Base &rBase = derived;
    std::cout << "rBase is a " << rBase.getName() << '\n';

    Base base;
    Base &rBase2 = base;
    std::cout << "rBase is a " << rBase2.getName() << '\n';
    return 0;
}