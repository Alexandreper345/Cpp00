#include "main.hpp"
#include "phonebook.hpp"

int main()
{
    std::string input;
    Phonebook phonebook;

    while (true)
    {   
        std::cout << "enter a option [ADD], [SEARCH], [EXIT]:  "; 
        getline(std::cin, input);
        if (input == "ADD")
            add_flowcontact(phonebook);
        else if(input == "SEARCH")
            phonebook.display_contats();
        else if (input == "EXIT")
            break;
    }
    return (EXIT_SUCCESS);
}
