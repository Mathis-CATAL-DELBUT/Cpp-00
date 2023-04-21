/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <mcatal-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 00:47:02 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/04/21 04:26:34 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

void   addContact(PhoneBook& phonebook)
{
    Contact contact;
    std::string input;

    while (input == "")
    {
        std::cout << "Enter first name:     ";
        if(!std::getline(std::cin, input))
            exit(0);
    }
    contact = phonebook.get_contact(phonebook.get_nb_contact());
    contact.set_first_name(input);
    input = "";
    while (input == "")
    {
        std::cout << "Enter last name:      ";
        if(!std::getline(std::cin, input))
            exit(0);
    }
    contact.set_last_name(input);
    input = "";
    while (input == "")
    {
        std::cout << "Enter nickname:       ";
        if(!std::getline(std::cin, input))
            exit(0);
    }
    contact.set_nickname(input);
    input = "";
    while (input == "")
    {
        std::cout << "Enter number:         ";
        if(!std::getline(std::cin, input))
            exit(0);
    }
    contact.set_number(input);
    input = "";
    while (input == "")
    {
        std::cout << "Enter darkest secret: ";
        if(!std::getline(std::cin, input))
            exit(0);
    }
    contact.set_darkest_secret(input);
    phonebook.set_contact(phonebook.get_nb_contact(), contact);
    phonebook.increment_nb_contact();
}

void    print_contact(PhoneBook& phonebook, int index)
{
    Contact contact;
    contact = phonebook.get_contact(index);
    std::cout << "First name:     " << contact.get_first_name() << std::endl;
    std::cout << "Last name:      " << contact.get_last_name() << std::endl;
    std::cout << "Nickname:       " << contact.get_nickname() << std::endl;
    std::cout << "Number:         " << contact.get_number() << std::endl;
    std::cout << "Darkest secret: " << contact.get_darkest_secret() << std::endl;
}

void    print_box(PhoneBook& phonebook, std::string str, int len)
{
    int i;

    i = 10 - len;
    while (i > 0)
    {
        std::cout << " ";
        i--;
    }
    std::cout << str;
    std::cout << "|";
}

void    searchContact(PhoneBook& phonebook)
{
    int i;
    int index;
    std::string input;

    i = 0;
    std::cout << "     Index|First Name| Last Name|  Nickname|" << std::endl;
    while (i < phonebook.get_nb_contact())
    {
        std::cout << "         " << i << "|";
        if (phonebook.get_contact(i).get_first_name().length() > 10)
            std::cout << phonebook.get_contact(i).get_first_name().substr(0, 9) << ".|";
        else
            print_box(phonebook, phonebook.get_contact(i).get_first_name(), phonebook.get_contact(i).get_first_name().length());
        if (phonebook.get_contact(i).get_last_name().length() > 10)
            std::cout << phonebook.get_contact(i).get_last_name().substr(0, 9) << ".|";
        else
            print_box(phonebook, phonebook.get_contact(i).get_last_name(), phonebook.get_contact(i).get_last_name().length());
        if (phonebook.get_contact(i).get_nickname().length() > 10)
            std::cout << phonebook.get_contact(i).get_nickname().substr(0, 9) << ".|";
        else
            print_box(phonebook, phonebook.get_contact(i).get_nickname(), phonebook.get_contact(i).get_nickname().length());
        std::cout << std::endl;
        i++;
    }
    while (input == "")
    {
        std::cout << "Enter index: ";
        if(!std::getline(std::cin, input))
            exit(0);
    }
    if (input[0] <= '0' || input[0] >= '9')
    {
        std::cout << "Invalid index" << std::endl;
        return ;
    }
    index = std::stoi(input);
    if (index >= 0 && index < phonebook.get_nb_contact())
        print_contact(phonebook, index);
    else
        std::cout << "Invalid index" << std::endl;
}


int     main(void)
{
    PhoneBook phonebook;
    std::string input;

    while (input != "EXIT")
    {
        std::cout << "Enter command: ";
        if(!std::getline(std::cin, input))
            exit(0);
        if (input == "ADD")
            addContact(phonebook);
        else if (input == "SEARCH")
            searchContact(phonebook);
    }
    return (0);
}
