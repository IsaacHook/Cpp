#include "Eigen/Eigen/Core"
#include <iostream>
#include <vector>

std::vector<Eigen::Vector3f> sample_params_;

int main(){
    Eigen::Vector3f a(1, 2, 3);
    std::cout << a << std::endl;

    std::cout << "---" << std::endl;

    sample_params_.push_back(a);
    sample_params_.push_back(a);

    for (int i=0; i<sample_params_.size(); i++){
        std::cout << sample_params_[i].transpose() << std::endl;
    }
}
