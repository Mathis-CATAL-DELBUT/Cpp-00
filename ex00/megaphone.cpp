/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:51:42 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/04/19 14:34:02 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
    int i = 0;
    int j;
    
    if (argc != 1)
    {
        while (argv[++i])
        {
            j = -1;
            while (argv[i][++j])
                    argv[i][j] = toupper(argv[i][j]);
            std::cout << argv[i];
        }
        std::cout << std::endl;
        return (0);
    }
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}