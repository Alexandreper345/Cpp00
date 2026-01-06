#ifndef CONTACT_HPP
#define CONTACT_HPP
#include "main.hpp"

class contact
{
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

public:
	std::string get_first_name();
	std::string get_last_name();
	std::string get_nickaname();
	std::string get_phone_number();
	std::string get_darkest_secret();

	void set_first_name(std::string f_name);
	void set_last_name(std::string l_name);
	void set_nickaname(std::string nick);
	void set_phone_number(std::string number);
	void set_darkest_secret(std::string darkest);
};
#endif