/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:45:48 by osallak           #+#    #+#             */
/*   Updated: 2022/09/24 16:45:49 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "harl satisfied? that can't be true, there is something wrong" << std::endl;
		return 0;
	}

	Harl _harlfilter;

	_harlfilter.complain(av[1]);
}
