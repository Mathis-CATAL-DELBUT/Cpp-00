/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <mcatal-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 00:47:02 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/04/21 03:14:52 by mcatal-d         ###   ########.fr       */
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
        std::cout << "Enter first name: ";
        if(!std::getline(std::cin, input))
            exit(0);
    }
    contact = phonebook.getContact(phonebook.getNbContact());
    contact.set_first_name(input);
    input = "";
    while (input == "")
    {
        std::cout << "Enter last name: ";
        if(!std::getline(std::cin, input))
            exit(0);
    }
    contact.set_last_name(input);
    input = "";
    while (input == "")
    {
        std::cout << "Enter nickname: ";
        if(!std::getline(std::cin, input))
            exit(0);
    }
    contact.set_nickname(input);
    input = "";
    while (input == "")
    {
        std::cout << "Enter number: ";
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
    phonebook.set_Contact(phonebook.getNbContact(), contact);
    phonebook.incrementNbContact();
}

void    print_contact(PhoneBook& phonebook, int index)
{
    Contact contact;
    contact = phonebook.getContact(index);
    std::cout << std::endl;
    std::cout << "First name: " << contact.get_first_name() << std::endl;
    std::cout << "Last name: " << contact.get_last_name() << std::endl;
    std::cout << "Nickname: " << contact.get_nickname() << std::endl;
    std::cout << "Number: " << contact.get_number() << std::endl;
    std::cout << "Darkest secret: " << contact.get_darkest_secret() << std::endl;
    std::cout << std::endl;
}
void    searchContact(PhoneBook& phonebook)
{
    int i;
    int index;
    std::string input;

    i = 0;
    while (i < phonebook.getNbContact())
    {
        std::cout << i << " | ";
        if (phonebook.getContact(i).get_first_name().length() > 10)
            std::cout << phonebook.getContact(i).get_first_name().substr(0, 9) << ". | ";
        else
            std::cout << phonebook.getContact(i).get_first_name() << " | ";
        if (phonebook.getContact(i).get_last_name().length() > 10)
            std::cout << phonebook.getContact(i).get_last_name().substr(0, 9) << ". | ";
        else
            std::cout << phonebook.getContact(i).get_last_name() << " | ";
        if (phonebook.getContact(i).get_nickname().length() > 10)
            std::cout << phonebook.getContact(i).get_nickname().substr(0, 9) << ". | ";
        else
            std::cout << phonebook.getContact(i).get_nickname() << " | ";
        std::cout << std::endl;
        i++;
    }
    while (input == "")
    {
        std::cout << "Enter index: ";
        if(!std::getline(std::cin, input))
            exit(0);
    }
    index = std::stoi(input);
    if (index >= 0 && index < phonebook.getNbContact())
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
    // print_contact(phonebook, 0);
    // print_contact(phonebook, 1);
    // print_contact(phonebook, 2);
    // print_contact(phonebook, 3);
    // print_contact(phonebook, 4);
    // print_contact(phonebook, 5);
    // print_contact(phonebook, 6);
    // print_contact(phonebook, 7);
    return (0);
}
