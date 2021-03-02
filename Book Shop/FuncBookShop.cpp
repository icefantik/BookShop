#include "FuncBookShop.h"

int countTotal()
{
    int count_total = 0;
    std::string line;
    std::ifstream file("database.txt");
    while (getline(file, line))
    {
        ++count_total;
    }
    return count_total;
}

void dataLocation(std::string line)
{
    int nc = 0;
    std::string str;
    struct Books_on_warehouse warehouse[countTotal()];
    for (unsigned int i = 0; i < line.length(); ++i) {
        if (line[i] != '|') {
            str += line[i];
        }
        else if (line[i] == '|') {
            str += line[i];
        }
    }
}

void loadDataFromFile()
{
    std::string line;
    std::ifstream file("database.txt");
    while (getline(file, line))
    {

    }
}

void findBookByAutor(struct Books_on_warehouse warehouse)
{

}

void findBookByName(struct Books_on_warehouse warehouse)
{

}

void menu()
{
    std::cout << "1. Find book by name" << std::endl
            << "2. Find book by autor" << std::endl
            << "3. Exit" << std::endl;
    int ch;
    struct Books_on_warehouse warehouse;
    while (1)
    {
        std::cin >> ch;
        switch (ch)
        {
            case 1: findBookByName(warehouse); break;
            case 2: findBookByAutor(warehouse); break;
            case 3: ch = -1; break;
            default: ch = 0; break;
        }
        if (ch == -1)
            break;
    }
}
