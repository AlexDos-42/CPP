#include "Pony.hpp"

Pony::Pony() : name("Unname_Pony")
{
    std::cout << "Your Pony has no name et he doesn't know what to do." << std::endl;
}

Pony::~Pony()
{
    std::cout << name << ", your Pony, is going to bed, exhausted." << std::endl;
}

void Pony::New_name()
{
    std::string new_str;

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    if (name == "Unname_Pony")
        std::cout << "What's the name of your Pony ?\n\t➜ ";
    else
        std::cout << "What's the new name of "<< name << " ?\n\t➜ ";
    std::getline(std::cin, new_str);
    name = new_str;
    std::cout << "Your Pony name is "<< name << std::endl;
        
}

void Pony::gallop()
{
    std::cout << "Your Pony, " << name << ", start to run. Slowly at first but faster and faster." << std::endl;
    std::cout << "Oh no you have lost " << name << std::endl;
    sleep(3);
    std::cout << "Ah! he's back." << std::endl;
}

void Pony::eat()
{
    std::cout << "Your Pony, " << name << ", is hungry. He's cooking grass like a real french cook." << std::endl;
    std::cout << "       _ ____" << std::endl;
    std::cout << "     /( ) _   \\" << std::endl;
    std::cout << "    / //   /\\` \\,  ||--||--||-" << std::endl;
    std::cout << "      \\|   |/  \\|  ||--||--||-" << std::endl;
    std::cout << "\e[92m~^~^~^~~^~~~^~~^^~^^^^^^^^^^^^\e[0m" << std::endl;
    std::cout << "He's eating a lot. Now it's time to do something else."<< std::endl;
}
