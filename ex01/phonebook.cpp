#include "phonebook.hpp"

Phonebook::Phonebook() : count(0) : nextIndex(0) {}

void Phonebook::add_contact(Contact& newcontact){
	contacts[nextIndex] = newcontact;
	nextIndex = (nextIndex + 1) % 8;	
	if (count < 8)
		count++;
}

void	Phonebook::display_contats()
{
	for (int i = 0; i < count; i++){
		std::cout << std::setw(10) << i << '|'
		<< std::setw(20) << truncate(contacts[i].get_first_name()) << "|"
		<< std::setw(20) << truncate(contacts[i].get_last_name()) << "|"
		<< std::setw(20) << truncate(contacts[i].get_nickaname()) << "|"
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
	std::cout << "Nickname: " << contacts[index].get_nickaname() << std::endl;
	std::cout << "Phone Number: " << contacts[index].get_phone_number() << std::endl;
	std::cout << "Darkest Secret: " << contacts[index].set_darkest_secret() << std::endl;
}