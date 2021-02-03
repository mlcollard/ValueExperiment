/*
    problemA.cpp
*/

#include <iostream>
#include <vector>

// sum of the values starting at pos
int sum(std::vector<int> v, int pos) {

    if (pos > v.size() - 1)
        return 0;

    return v[pos] + sum(v, pos + 1);
}

int main(int argc, char* argv[]) {

    // requires option for size
    if (argc < 2) {
        std::cout << "Usage: " << argv[0] << " <size>\n";
        return 1;
    }

    // size is the first argument
    int size = std::stoi(argv[1]);

    // values
    std::vector<int> values(size, 1);

    // total the values
    int total = sum(values, 0);

    // output the total
    std::cout << total << '\n';

    return 0;
}
