#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#define N 8

#include <iostream>
#include <string.h>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
    private:

        Contact arr[N];
        int current;
        void showInfo();
        int printPhoneBok();
        void print_row(std::string);

    public:

        PhoneBook();
        ~PhoneBook();
        
        void ADD();
        void SEARCH();

};



#endif