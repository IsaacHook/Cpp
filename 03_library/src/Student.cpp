#include "Student.h"
#include <iostream>
#include <string>

Student::Student() : name("unknown"){}
Student::Student(std::string n) : name(n){}
void Student::whois(){ std::cout << "I am " << name << std::endl; }
