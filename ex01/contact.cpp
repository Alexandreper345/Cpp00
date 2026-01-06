#include "contact.hpp"

contact::get_first_name()
{
    return first_name; 
}

contact::set_first_name(std::string f_name)
{
    first_name = f_name;
}

contact::get_last_name()
{
    return last_name;
}

contact::set_last_name(std::string l_name)
{
    last_name = l_name;
}

contact::get_nickaname()
{ 
    return nickname;
}

contact::set_nickaname(std::string nick)
{
    nickname = nick
}

contact::get_phone_number()
{ 
    return phone_number; 
}

contact::set_phone_number(std::string number)
{
    if (number.length <= 13)
        phone_number = number;
}

contact::get_darkest_secret()
{ 
    return darkest_secret;
}

contact::set_darkest_secret(std::string darkest)
{
    darkest_secret = darkest;
}
