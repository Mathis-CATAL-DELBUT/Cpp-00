/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <mcatal-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 23:44:13 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/04/21 02:38:43 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

Contact::Contact(void)
{
    first_name = "";
    last_name = "";
    nickname = "";
    number = "";
    darkest_secret = "";
    return ;
}

Contact::~Contact(void)
{
    return ;
}

std::string Contact::get_first_name(void)
{
    return (this->first_name);
}

std::string Contact::get_last_name(void)
{
    return (this->last_name);
}

std::string Contact::get_nickname(void)
{
    return (this->nickname);
}

std::string Contact::get_number(void)
{
    return (this->number);
}

std::string Contact::get_darkest_secret(void)
{
    return (this->darkest_secret);
}

void    Contact::set_first_name(std::string first_name)
{
    this->first_name = first_name;
}

void    Contact::set_last_name(std::string last_name)
{
    this->last_name = last_name;
}

void    Contact::set_nickname(std::string nickname)
{
    this->nickname = nickname;
}

void    Contact::set_number(std::string number)
{
    this->number = number;
}

void    Contact::set_darkest_secret(std::string darkest_secret)
{
    this->darkest_secret = darkest_secret;
}
