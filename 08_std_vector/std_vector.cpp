#include <iostream>
#include <vector>

int main(){
    std::vector<int> v;
    v.push_back(1);

    // fancy c11 style
    for (int n:v){
        std::cout << n << std::endl;
    }
}