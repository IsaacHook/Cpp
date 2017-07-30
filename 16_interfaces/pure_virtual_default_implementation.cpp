#include <iostream>
using namespace std;

class A {
private:
    int m_value;
protected:
    A(int v) : m_value(v){}
public:
    virtual void getValue() = 0;
};

void A::getValue(){
    cout << "A : " << m_value << endl;
}

class B : public A{
public:
    B(int v) : A(v) {}
    virtual void getValue(){
        return A::getValue();
    }
};

int main(){
    B  b(2);
    b.getValue();
}