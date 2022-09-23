/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 17:18:53 by osallak           #+#    #+#             */
/*   Updated: 2022/09/23 16:35:03 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char *av[]){
    if (ac < 2){
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
    for (int i = 1; i < ac; i++){
        std::string Str = av[i];
        for (int j = 0; j <  (int) Str.length(); j++){
            Str[j] = toupper(Str[j]);
        }
	if (av[i + 1] != NULL)
            Str += " ";
	std::cout << Str;
    }
	std::cout << std::endl;
}
