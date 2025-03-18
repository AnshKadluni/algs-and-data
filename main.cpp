#include "Reverser.h"
#include <vector>

int main(void) {

    Reverser r;

    std::vector<std::pair<int, int>> testCases = {
        {5, 5},
        {12345, 54321},
        {100, 1},
        {2468, 8642},
        {13579, 97531},
        {42, 24},
        {987654321, 123456789},
        {1221, 1221},
        {900, 9},
        {-123, -321} // Optional: If negative numbers are allowed
    };

    for (const auto& [input, expected] : testCases) {
        int result = r.reverseDigit(input);
        std::cout << "reverseDigit(" << input << ") = " << result 
                  << " | Expected: " << expected 
                  << " | " << (result == expected ? "✅ Pass" : "❌ Fail") << std::endl;
    }

    return 0;
}