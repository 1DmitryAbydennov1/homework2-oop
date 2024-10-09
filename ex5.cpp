#include <iostream>
#include <sstream>
#include <string>
#include <stdexcept>

int sumNumbersInBrackets(const std::string& input) 
{
    if (input.front() != '[' || input.back() != ']') 
    {
        throw std::invalid_argument("Invalid input format");
    }

    std::string numbers = input.substr(1, input.size() - 2);
    std::stringstream ss(numbers);
    int sum = 0, number;
    char comma;
    
    while (ss >> number) 
    {
        sum += number;
        if (!(ss >> comma || ss.eof())) 
        {
            throw std::invalid_argument("Invalid input format");
        }
    }
    
    if (!ss.eof()) 
    {
        throw std::invalid_argument("Invalid input format");
    }

    return sum;
}

int main() 
{
    try 
    {
        std::string input = "[1, 2, 3, 4]";
        int result = sumNumbersInBrackets(input);
        std::cout << "Sum: " << result << std::endl;
    } 
    catch (const std::invalid_argument& e) 
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    try {
        std::string invalidInput = "[1, 2, invalid, 4]";
        int result = sumNumbersInBrackets(invalidInput);
        std::cout << "Sum: " << result << std::endl;
    } 
    catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
