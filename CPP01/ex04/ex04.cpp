#include <iostream>

int main()
{
    std::string str{"HI THIS IS BRAIN"};
    std::string *ptr{&str};
    std::string &ref{str};

    std::cout << "ptr: " << *ptr << std::endl;
    std::cout << "ref: " << ref << std::endl;

    return (0);
}