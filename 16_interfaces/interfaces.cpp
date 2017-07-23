#include <iostream>
#include <string>
using namespace std;

// ###############################
// Simple stuff
// ###############################
void just_a_normal_function(){
    cout << "just_a_normal_function" << endl;
}

class JustANormalClass {
private: // accessed only by member functions of the same class or friends
    string m_name;
public: // accessed by anybody and their cat
    JustANormalClass(string name) : m_name(name){}
    void getName(){ cout << m_name << endl; }
protected: // accessed only by base, derived and friends
};

// ###############################
// Example of simple inheritance
// ###############################
class Person {
private:
    string m_name;
    int m_age;
protected:
    string m_hair_colour;
public:
    Person(string name = "", int age = 0) : m_name(name), m_age(age){}
    string getName() const { return m_name; }
    string getHairColour() const { return m_hair_colour; }
    int getAge() const { return m_age; }
};

// BaseballPlayer publicly inheriting Person
class BaseballPlayer : public Person    // public inheritance means all inherited
                                        // access members have same type
{
public:
    double m_battingAverage;
    int m_homeRuns;
 
    BaseballPlayer(string name, int age, double battingAverage = 0.0, int homeRuns = 0)
       : m_battingAverage(battingAverage), m_homeRuns(homeRuns), Person(name, age)
    {
        m_hair_colour = "brown";
    }
};

// #######################################
// Redefining functions using inheritance
// #######################################
class Base{
protected:
    int m_value;
public:
    Base(int value=0) : m_value(value){}
    void identify(){ cout << "I am base" << endl; }
};

class Derived : public Base {
public:
    Derived(int value=2) : Base(value) {}
    void identify(){ 
        Base::identify();
        cout << "I am derived" << endl;
    }
    using Base::m_value; // can change inherited member access specifier
};

// #######################################
// Redefining functions using inheritance
// #######################################

int main(){
    just_a_normal_function();

    JustANormalClass c("Norman");
    c.getName();

    Person p("Tom", 1);
    cout << p.getName() << endl;
    cout << p.getAge()<< endl;


    BaseballPlayer b("Bob", 36, 2, 3);
    // b.m_name = "Bob";
    // b.m_age = 34;
    cout << b.getName() << endl;
    cout << b.getAge()<< endl;
    cout << b.getHairColour()<< endl;

    Base base;
    Derived derived;
    base.identify();
    derived.identify();
    cout << derived.m_value << endl;
}









