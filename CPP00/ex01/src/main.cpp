#include "../inc/PhoneBook.hpp"
#include "../inc/Contact.hpp"

int main()
{
    PhoneBook pbook;
    std::string input;

    while (1)
    {
        std::cout << "Введите команду" << std::endl;
        std::cin >> input;

        if (input == "ADD")
            pbook.ADD();
        else if (input == "SEARCH")
            pbook.SEARCH();
        else if (input == "EXIT")
        {
            std::cout << "THE END" << std::endl;
            break;
        }
        else 
            std::cout << "Incorrect command" << std::endl;
    }
    return 0;
}