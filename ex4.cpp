#include <iostream>
#include <string>

void truncateToDot(std::string& s) 
{
    size_t pos = s.find('.');
    if (pos != std::string::npos) 
    {
        s.erase(pos);
    }
    s.shrink_to_fit();
}

int main() 
{
    std::string text = "wiki.com";
    truncateToDot(text);
    std::cout << "Truncated string: " << text << std::endl;

    return 0;
}
