#include "../inc/PhoneBook.hpp"


Contact :: Contact()
{

}

Contact :: ~Contact()
{

}

void Contact :: create_Contact()
{
    std::cout << "Введите FirstName: ";
    std::cin >> firstname;

    std::cout << "Введите LastName: ";
    std::cin >> lastname;

    std::cout << "Введите NickName: ";
    std::cin >> nickname;

    std::cout << "Введите Phonenumber: ";
    std::cin >> phonenumber;

    std::cout << "Введите DarkestSecret: ";
    std::cin >> darkestSecret;
}

std::string Contact :: get_firstname()
{
    return firstname;
}

std::string Contact :: get_lastname()
{
    return lastname;
}

std::string Contact :: get_nickname()
{
    return nickname;
}

std::string Contact :: get_phonenumber()
{
    return phonenumber;
}

std::string Contact :: get_darkestSecret()
{
    return darkestSecret;
}