/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <mcatal-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 23:31:33 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/04/21 03:54:21 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    public:
        PhoneBook(void);
        ~PhoneBook(void);
        Contact get_contact(int index);
        int     get_nb_contact(void);
        void    set_contact(int index, Contact contact);
        void    increment_nb_contact(void);

    private:
        Contact contact[8];
        int     nb_contact;
};

#endif