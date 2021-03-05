#include "FuncBookShop.h"

int main()
{
    int ch;
    struct Books_on_warehouse warehouse;
    while (1)
    {
        std::cout << "1. Find book by name" << std::endl
            << "2. Find book by autor" << std::endl
            << "3. Exit" << std::endl;
        std::cin >> ch;
        std::string enter_string;
        switch (ch)
        {
            case 1: std::cin >> enter_string; std::cout << findBookByName(enter_string) << std::endl; break;
            case 2: std::cin >> enter_string; std::cout << findBookByAutor(enter_string) << std::endl; break;
            case 3: ch = -1; break;
            default: ch = 0; break;
        }
        if (ch == -1)
            break;
    }
    return 0;
}
