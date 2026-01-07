#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "main.hpp"
#include "contact.hpp"
#include <iomanip>

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
    void    add_contact(Contact& newcontact);
};

#endif