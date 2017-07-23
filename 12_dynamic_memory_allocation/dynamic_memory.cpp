#include <iostream>

int main(){
    int *ptr = new int;
    *ptr = 7;

    std::cout << *ptr << std::endl;
    delete ptr; // doesnt actually delete anythig - just releases memory
    ptr = 0;
    std::cout << ptr << std::endl;
}