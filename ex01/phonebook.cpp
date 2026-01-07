#include "phonebook.hpp"

Phonebook::Phonebook() : count(0), nextIndex(0) {}


std::string	truncate(const std::string& str){
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return (str);
}

void Phonebook::add_contact(const Contact& newcontact){
	contacts[nextIndex] = newcontact;
	nextIndex = (nextIndex + 1) % 8;	
	if (count < 8)
		count++;
}

void add_flowcontact(Phonebook& phonebook)
{
	Contact c;
	std::string input;

	std::cout << "First Name: ";
	std::getline(std::cin, input);
	c.set_first_name(input);

	std::cout << "Last Name: ";
	std::getline(std::cin, input);
	c.set_last_name(input);

	std::cout << "Nickname: ";
	std::getline(std::cin, input);
	c.set_nickname(input);

	std::cout << "Phone Number: ";
	std::getline(std::cin, input);
	c.set_phone_number(input);

	std::cout << "Darkest Secret: ";
	std::getline(std::cin, input);
	c.set_darkest_secret(input);

	phonebook.add_contact(c);
}

void	Phonebook::display_contats()
{
	for (int i = 0; i < count; i++){
		std::cout << std::setw(10) << i << '|'
		<< std::setw(10) << truncate(contacts[i].get_first_name()) << "|"
		<< std::setw(10) << truncate(contacts[i].get_last_name()) << "|"
		<< std::setw(10) << truncate(contacts[i].get_nickname()) << "|"
		<< std::endl;
	}
}

void	Phonebook::showContact(int index){
	if (index < 0 || index >= count)
	{
		std::cout << "index invalid" << std::endl;
		return;
	}
	std::cout << "First Name: " << contacts[index].get_first_name() << std::endl;
	std::cout << "Last Name: " << contacts[index].get_last_name() << std::endl;
	std::cout << "Nickname: " << contacts[index].get_nickname() << std::endl;
	std::cout << "Phone Number: " << contacts[index].get_phone_number() << std::endl;
	std::cout << "Darkest Secret: " << contacts[index].get_darkest_secret() << std::endl;
}