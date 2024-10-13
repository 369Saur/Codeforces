#include <iostream>
#include <vector>
#include <sstream>

std::vector<int> ii() {
    std::string input;
    std::getline(std::cin, input);
    std::istringstream iss(input);
    std::vector<int> values;
    int value;
    while (iss >> value) {
        values.push_back(value);
    }
    return values;
}

const int mxn = 200010;
int SS[mxn] = {0};

int dp(int n) {
    int ans = 0;
    std::string num = std::to_string(n);
    for (char c : num) {
        ans += c - '0';
    }
    return ans;
}

int main() {
    for (int i = 0; i < mxn - 1; i++) {
        SS[i + 1] = dp(i + 1) + SS[i];
    }

    std::vector<int> input = ii();
    int n = input[0];

    std::cout << SS[n] << std::endl;

    return 0;
}