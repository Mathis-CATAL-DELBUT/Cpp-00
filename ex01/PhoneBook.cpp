/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <mcatal-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 23:42:23 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/04/21 03:54:14 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

PhoneBook::PhoneBook(void)
{
    this->nb_contact = 0;
    return ;
}

PhoneBook::~PhoneBook(void)
{
    return ;
}

Contact PhoneBook::get_contact(int index)
{
    return (this->contact[index]);
}

int     PhoneBook::get_nb_contact(void)
{
    if (this->nb_contact < 7)
        return (this->nb_contact);
    return (this->nb_contact % 8);
}

void PhoneBook::set_contact(int index, Contact contact)
{
    this->contact[index] = contact;
}

void   PhoneBook::increment_nb_contact(void)
{
    this->nb_contact++;
}
