#include "Finder.h"

int main(void) {

    Finder f;

    std::vector<int> x = f.findSubstrings("aaaab", "aaab");

    for (size_t i = 0; i < x.size(); i++)
    {
        std::cout << x[i] << std::endl;
    }
    

    return 0;
}