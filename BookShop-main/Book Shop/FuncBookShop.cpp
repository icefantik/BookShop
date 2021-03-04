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

void loadDataFromFile()
{
    int countLineFromFile = countTotal();
    std::ifstream file("database.txt");
    struct Books_on_warehouse warehouse[countLineFromFile];
    for (int i = 0; i < countLineFromFile; ++i) {
        file >> warehouse[i].autor >> warehouse[i].names_books >> warehouse[i].count_books >> warehouse[i].book_stored >> warehouse[i].ISBN >> warehouse[i].price;
    }
}

void findBookByAutor(std::string find_name_book)
{
    struct Books_on_warehouse warehouse[countLineFromFile];

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
