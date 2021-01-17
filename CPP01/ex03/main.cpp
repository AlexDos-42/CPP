#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <limits>

int main()
{
    int n;

    std::cout << "How many slow zombies do you see ?\n➜ ";
    std::cin >> n;
    ZombieHorde slow("slow", n);
    slow.announce();
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');;
    
    std::cout << "How many Fast zombies do you see ?\n➜ ";
    std::cin >> n;
    ZombieHorde fast("fast", n);
    fast.announce();
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}