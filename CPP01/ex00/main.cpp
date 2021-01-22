#include "Pony.hpp"


void ponyOnTheStack()
{
    std::string str;
    Pony MyPony;

    while (1)
    {
        std::cout << "What's your pony gonna do ?" << std::endl;
        std::cout << "tape 1: Change his name" << std::endl;
        std::cout << "tape 2: Gallop" << std::endl;
        std::cout << "tape 3: Eat" << std::endl;
        std::cout << "tape 4: Sleep" << std::endl;
        std::cout << "\t➜ ";
        std::cin >> str;
        if (str == "1")
            MyPony.New_name();
        else if (str == "2")
            MyPony.gallop();
        else if (str == "3")
            MyPony.eat();
        else if (str == "4")
            break ;
    }
}

void ponyOnTheHeap()
{
    std::string str;
    Pony *MyPony = new Pony();

    while (1)
    {
        std::cout << "What's your pony gonna do ?" << std::endl;
        std::cout << "tape 1: Change his name" << std::endl;
        std::cout << "tape 2: Gallop" << std::endl;
        std::cout << "tape 3: Eat" << std::endl;
        std::cout << "tape 4: Sleep" << std::endl;
        std::cout << "\t➜ ";
        std::cin >> str;
        if (str == "1")
            MyPony->New_name();
        else if (str == "2")
            MyPony->gallop();
        else if (str == "3")
            MyPony->eat();
        else if (str == "4")
            break ;
    }
    delete MyPony;
    MyPony = 0;
}


int main()
{
    std::string str;

    while (1)
    {
        std::cout << "Where do you want your Pony ?" << std::endl;
        std::cout << "tape 1: On The Stack" << std::endl;
        std::cout << "tape 2: On The Heap" << std::endl;
        std::cout << "tape 3: No more Pony" << std::endl;
        std::cout << "\t➜ ";
        std::cin >> str;
        if (str == "1")
            ponyOnTheStack();
        else if (str == "2")
            ponyOnTheHeap();   
        else if (str == "3")
            break ;
    }

    return (0);
}