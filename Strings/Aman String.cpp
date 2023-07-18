#include <iostream>
#include <string>

int countSubstringPairs(const std::string& str) {
    int n = str.length();
    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            std::string substring = str.substr(i, j - i + 1);
            if (substring.find("aman") != std::string::npos) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int T;
    std::cin >> T;

    while (T--) {
        std::string str;
        std::cin >> str;

        int pairs = countSubstringPairs(str);
        std::cout << pairs << std::endl;
    }

    return 0;
}
