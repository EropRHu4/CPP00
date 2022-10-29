#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string.h>


class Contact
{
    private:

        std::string firstname;
        std::string lastname;
        std::string nickname;
        std::string phonenumber;
        std::string darkestSecret;

    public:

        void create_Contact();
        std::string get_firstname();
        std::string get_lastname();
        std::string get_nickname();
        std::string get_phonenumber();
        std::string get_darkestSecret();
        Contact ();
        ~Contact ();
    
};

#endif