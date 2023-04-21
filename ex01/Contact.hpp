/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <mcatal-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 23:42:56 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/04/21 01:34:25 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
    public:
        std::string get_first_name(void);
        std::string get_last_name(void);
        std::string get_nickname(void);
        std::string get_number(void);
        std::string get_darkest_secret(void);
        void    set_first_name(std::string first_name);
        void    set_last_name(std::string last_name);
        void    set_nickname(std::string nickname);
        void    set_number(std::string number);
        void    set_darkest_secret(std::string darkest_secret);
        Contact(void);
        ~Contact(void);

    private:
        std::string    first_name;
        std::string    last_name;
        std::string    nickname;
        std::string    number;
        std::string    darkest_secret;
};

#endif