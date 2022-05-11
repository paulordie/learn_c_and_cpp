#include <iostream>

int main(int argc, char const *argv[])
{
    unsigned char y = 235;
    std::cout << "cast: " << char(y) << std::endl;
    if (true)
        std::cout << "test" << std::endl;

    int money;

    bool var1 = true;
    bool var2 = false;

    while (1)
    {
        std::cout << "ditige um numero: ";
        std::cin >> money;

        if (money == 0)
        {
            var1 = true;
            var2 = false;
            break;
        }
        
        else if (money <= 10)
        {
            var1 = false;
            var2 = false;
            std::cout << "menor que 10: " << money << std::endl;
        }

        else if (money > 10)
        {
            var1 = true;
            var2 = true;
            std::cout << "maior que 10: " << money << std::endl;
        }

        else std::cout << "erro" << std::endl;
    }

    return 0;
}
