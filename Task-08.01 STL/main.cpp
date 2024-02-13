//
//  main.cpp
//  Task-08.01 STL
//
//  Created by Маргарет  on 13.02.2024.
//

#include <iostream>
#include <set>
#include <vector>

int main(int argc, const char * argv[]) {
    std::vector<int> vec {1, 1, 2, 5, 6, 1, 2, 4};
    std::set<int> st;
    std::cout << "[IN]: ";
    for (const auto& elem : vec) {
        std::cout << elem << " ";
    }
    std::sort(vec.begin(), vec.end());
    auto it = std::unique(vec.begin(), vec.end());
    vec.erase(it, vec.end());
    std::cout << "\n";
    std::cout << "[OUT]: ";
    for (const auto& elem : vec) {
        std::cout << elem << " ";
    }
    
    
    return 0;
}
