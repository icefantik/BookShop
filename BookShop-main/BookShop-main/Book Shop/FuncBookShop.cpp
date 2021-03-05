#include "FuncBookShop.h"

unsigned int countTotal()
{
    unsigned int count_total = 0;
    std::string line;
    std::ifstream file("database.txt");
    while (getline(file, line))
    {
        ++count_total;
    }
    return count_total;
}

const unsigned int countLineFromFile = countTotal();

void sortBookName() // сортировка по алфавиту
{
    std::string tmp, str1, str2;
    struct Books_on_warehouse warehouse[countLineFromFile];
    for (unsigned int i = 0; i < countLineFromFile; ++i) {
        for (unsigned int j = 0; j < countLineFromFile; ++j) {
            str1 = warehouse[i].names_books; str2 = warehouse[j].names_books;
            if (str1[0] > str2[0])
            {
                tmp = warehouse[i].names_books;
                warehouse[i].names_books = warehouse[j].names_books;
                warehouse[j].names_books = tmp;
            }
        }
    }
}

void sortBookAutor(unsigned int countLineFromFile)
{
    std::string tmp, str1, str2;
    struct Books_on_warehouse warehouse[countLineFromFile];
    for (unsigned int i = 0; i < countLineFromFile; ++i) {
        for (unsigned int j = 0; j < countLineFromFile; ++j) {
            str1 = warehouse[i].autor; str2 = warehouse[j].autor;
            if (str1[0] > str2[0])
            {
                tmp = warehouse[i].autor;
                warehouse[i].autor = warehouse[j].autor;
                warehouse[j].autor = tmp;
            }
        }
    }
}

void loadDataFromFile()
{
    std::ifstream file("database.txt");
    struct Books_on_warehouse warehouse[countLineFromFile];
    for (unsigned int i = 0; i < countLineFromFile; ++i) {
        file >> warehouse[i].autor >> warehouse[i].names_books >> warehouse[i].count_books >> warehouse[i].book_stored >> warehouse[i].ISBN >> warehouse[i].price;
    }
}

std::string findBookByAutor(std::string find_autor_book) // поиск по имени автора
{
    std::string find_string;
    unsigned int index_find_book;
    struct Books_on_warehouse warehouse[countLineFromFile];
    for (unsigned int i = 0; i < countLineFromFile; ++i) {
        //index_find_book = warehouse[0].autor.find(find_autor_book);
    }
    return ;
}

std::string findBookByName(std::string find_name_book) // поиск по названию книги
{
    std::string find_string;
    return find_string;
}

