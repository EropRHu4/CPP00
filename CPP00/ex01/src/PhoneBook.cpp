#include "../inc/PhoneBook.hpp"


PhoneBook :: PhoneBook()
{
	current = 0;
	showInfo();
}

PhoneBook :: ~PhoneBook()
{

}

void PhoneBook :: showInfo()
{
    std::cout	<< "+-------------------------------------------------------+\n"
				<< "|                  Введите команду                      |\n"
				<< "+-------------------------------------------------------+\n"
				<< "|                                                       |\n"
				<< "|     ADD     -   Добавить контакт                      |\n"
				<< "|                                                       |\n"
				<< "|     SEARCH  -   Поиск контакта                        |\n"
				<< "|                                                       |\n"
				<< "|     EXIT    -   Закрыть телефонную книгу              |\n"
				<< "|                                                       |\n"
				<< "+-------------------------------------------------------+\n";
}

int PhoneBook :: printPhoneBok()
{
	int i;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|   Index  |FirstName | LastName | NickName |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (i = 0; i < N; i++)
	{
		if (!arr[i].get_firstname().empty())
		{
			std::cout << "|" << std::setw(10) << i << "|";
			print_row(arr[i].get_firstname());
			print_row(arr[i].get_lastname());
			print_row(arr[i].get_nickname());
			std::cout << "\n";
		}
		else 
		{
			break;
		}
	}
	return (i);
}

void PhoneBook :: print_row(std::string row)
{
	int j;

	if (row.length() > 10)
	{
		for (int i = 0; i < 9 ; i++)
		{
			std::cout << row[i];
		}
		std::cout << ".|" ;
	}
	else
	{
		for (j = 0; j < row.length(); j++)
		{
			std::cout << row[j];
		}
		std::cout << std::setw(10 - j + 1) << "|";
	}
}

void PhoneBook :: ADD()
{
	arr[current].create_Contact();
	current++;
	if (current == 8)
		current = 0;
}

void PhoneBook :: SEARCH()
{
	int i;
	int index;

	if (arr[0].get_firstname().empty())
	{
		std::cout << "Phonebook is empty" << std::endl;
		return;
	}

	i = printPhoneBok();
	std::cout << "Write index" << std::endl;
	std::cin >> index;
	if (index > 0 && index <= i)
	{
		std::cout << "FirstName:\t" << arr[index - 1].get_firstname() << std::endl;
		std::cout << "LastName:\t" << arr[index - 1].get_lastname() << std::endl;
		std::cout << "NickName:\t" << arr[index - 1].get_nickname() << std::endl;
		std::cout << "PhoneNumber:\t" << arr[index - 1].get_phonenumber() << std::endl;
		std::cout << "DarkestSecret:\t" << arr[index - 1].get_darkestSecret() << std::endl;
	}
	else
		std::cout << "Incorrect index" << std::endl;

}