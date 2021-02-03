/*
    problemB.cpp
*/

#include <iostream>
#include <vector>
#include <algorithm>

// comparison for less than
bool lessThan(std::vector<int> v1, std::vector<int> v2) {
    return v1 < v2;
}

int main(int argc, char* argv[]) {

    // requires option for size
    if (argc < 2) {
        std::cout << "Usage: " << argv[0] << " <size>\n";
        return 1;
    }

    // size is first options
    int size = std::stoi(argv[1]);

    // generate size vectors of vectors
    std::vector<std::vector<int>> v(size, std::vector<int>(100, 1));

    // sort 
    std::sort(v.begin(), v.end(), lessThan);

    return 0;
}
