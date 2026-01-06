#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "main.hpp"
class phonebook
{
private:
    std::string phonebook[8];
    int count;
    int oldcont;
public:
    phonebook(/* args */);
    ~phonebook();
};

phonebook::phonebook(/* args */)
{
}

phonebook::~phonebook()
{
}

#endif