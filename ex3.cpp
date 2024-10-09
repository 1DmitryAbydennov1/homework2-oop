#include <iostream>
#include <string>

std::string operator*(const std::string& str, int n) {
    std::string result;
    for (int i = 0; i < n; ++i) {
        result += str;
    }
    return result;
}

int main() {
    std::string text = "Hello";
    int times = 3;
    
    std::string repeatedText = text * times;
    std::cout << repeatedText << std::endl;  

    return 0;
}
