/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 23:42:56 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/04/20 23:43:40 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

class contact
{
    public:
        contact(void);
        ~contact(void);
        char    *first_name;
        char    *last_name;
        char    *nickname;
        char    *number;
        char    *darkest_secret;
};

#endif