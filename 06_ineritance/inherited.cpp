#include <iostream>

using namespace std;

class Base
{
public:
    int m_id;
 
    Base(int id=0)
        : m_id(id)
    {
        std::cout << "Base\n";
    }
 
    int getId() const { return m_id; }
};
 
class Derived: public Base
{
public:
    double m_cost;
 
    Derived(double cost=0.0, int id=3)
        : m_cost(cost), Base(id)
    {
        std::cout << "Derived\n";
    }
 
    double getCost() const { return m_cost; }
};
 
int main()
{
    cout << "Instantiating Base" << endl;
    Base cBase;
    cout << "--cBase.m_id " << cBase.m_id << endl;
 
    cout << "Instantiating Derived" << endl;
    Derived cDerived(1,2);
    cout << "--cBase.m_id " << cDerived.m_id << endl;
    cout << "--cDerived.getId() " << cDerived.getId() << endl;

    return 0;
}