// http://www.learncpp.com/cpp-tutorial/102-composition/
#include <string>
#include <iostream>

using namespace std;

class Point2D{
private:
    float m_x;
    float m_y;
public:
    Point2D() : m_x(0), m_y(0) {} // default constructor
    Point2D(float x, float y) : m_x(x), m_y(y) {} // specific constructor
    friend std::ostream& operator<<(std::ostream& out, const Point2D &point){
        out << "(" << point.m_x << ", " << point.m_y << ")";
    }
    void setPoint(float x, float y){ 
        m_x=x; 
        m_y=y;
    }
};

class Creature{
private:
    std::string m_name;
    Point2D m_location;
public:
    Creature() : m_name("unknown"){}
    Creature(string name) : m_name(name){}
    Creature(string name, Point2D p) : m_name(name), m_location(p){}
    friend std::ostream& operator<<(std::ostream& out, const Creature &c){
        out << c.m_name << " is at " << c.m_location;
    }
    void moveTo(float x, float y){
        m_location.setPoint(x, y);
    }
};

int main(){
    Point2D p(1,2);
    cout << p << endl;

    Creature c("tom", p);
    cout << c << endl;

    c.moveTo(3,4);
    cout << c << endl;
}