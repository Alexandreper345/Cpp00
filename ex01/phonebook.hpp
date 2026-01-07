#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include <iomanip>
#include "contact.hpp"

class Phonebook
{
private:
    Contact contacts[8];
    int count;
    int nextIndex;
public:
    Phonebook();
    void    display_contats();
    void    showContact(int index);
    void    add_contact(const Contact& newcontact);
};

#endif