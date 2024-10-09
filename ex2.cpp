#include <iostream>
#include <string>


std::string repeat1(const std::string& s) 
{
    return s + s;
}


void repeat2(std::string& s) 
{
    s += s;
}

void repeat3(std::string* ps) 
{
    if (ps) 
    {
        *ps += *ps;
    }
}

std::string* repeat4(const std::string& s)
{
    return new std::string(s + s);
}

int main() 
{
    std::string str1 = "Cat";
    std::cout << "repeat1: " << repeat1(str1) << std::endl;

    std::string str2 = "Dog";
    repeat2(str2);
    std::cout << "repeat2: " << str2 << std::endl;

    std::string str3 = "Bird";
    repeat3(&str3);
    std::cout << "repeat3: " << str3 << std::endl;

    std::string str4 = "Fish";
    std::string* doubledStr4 = repeat4(str4);
    std::cout << "repeat4: " << *doubledStr4 << std::endl; 

    return 0;
}
