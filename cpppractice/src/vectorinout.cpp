#include <cstdint>
#include<iostream>
#include<vector>
using namespace std;


int main(){
    std::vector<std::uint32_t>v;
    //v.resize(5);
    for(int i=0;i<5;i++){
        std::uint32_t x;
        std::cin >> x;
        v[i] = x;
    }
    for(int i=0;i<5;i++){
        std::uint32_t x;
        std::cout << v[i]<<"\n";
    }

}