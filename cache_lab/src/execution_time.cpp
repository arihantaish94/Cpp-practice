//Measure the execution time of inserting a vector of 10000000 integers into a set and a vector, and print the results.

#include<iostream>
#include<chrono>

void insertVec(std::vector<std::uint32_t>& vec){
    for(int i=0;i<10000000;i++){
        vec.push_back(i);
    }
}

int main(){
    std::vector<std::uint32_t> vec;
    auto startTime = std::chrono::high_resolution_clock::now();
    insertVec(vec);
    auto endTime = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - startTime).count();
    std::cout << "Time taken to insert 10000000 integers "<< duration << " milliseconds" << std::endl;
    return 0;
}


