#include <string>
#include <cctype>
#include <iostream>

std::string changeRegister(const std::string& input) 
{
    if (input.empty()) 
    {
        return "";
    }
    
    std::string result = input;
    if (std::islower(result[0])) 
    {
        result[0] = std::toupper(result[0]);
    }
    else if (std::isupper(result[0])) 
    {
        result[0] = std::tolower(result[0]);
    }
    
    return result;
}

int main()
{
    std::string test1 = "Cat";
    std::string test2 = "dog";
    std::string test3 = "";

    std::cout << changeRegister(test1) << std::endl; 
    std::cout << changeRegister(test2) << std::endl; 
    std::cout << changeRegister(test3) << std::endl; 

    return 0;
}