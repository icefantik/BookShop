#ifndef FUNCBOOKSHOP_H_INCLUDED
#define FUNCBOOKSHOP_H_INCLUDED

#include <iostream>
#include <fstream>

struct Books
{
    std::string autor;
    std::string names_books;
    unsigned long int price;
    std::string publisher;
    std::string year_of_publishing;
    std::string ISBN;
};

struct Books_on_warehouse
{
    std::string autor;
    std::string names_books;
    unsigned int count_books; //Количество книг на складе
    std::string book_stored; //На каком стелаже эта книга храница
    std::string ISBN;
    unsigned long profit;
};

void menu();

#endif // FUNCBOOKSHOP_H_INCLUDED
