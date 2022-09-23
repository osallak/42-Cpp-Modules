/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:36:46 by osallak           #+#    #+#             */
/*   Updated: 2022/09/23 16:36:47 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook phone;
	std::string command;

	while (true){
		std::cout << "PhoneBook $ ";
		std::getline(std::cin, command);
		if (std::cin.good() == 0 || command == "EXIT")
		{
			std::cout << "exiting..." << std::endl;
			return 0;
		}
		if (command.empty())
			continue ;
		else if (command == "ADD"){
			if (phone.Add() == -1){
				std::cout << std::endl << "exit" << std::endl;
				return 0;
			}
		}
		else if (command == "SEARCH"){
			if (phone.Search() == -1){
				std::cout << std::endl << "exit" << std::endl;
				return 0;
			}
		}
		else if (command == "HELP"){
			std::cout << "Available commands: [ADD, SEARCH, EXIT, HELP (this page)]" << std::endl;
		}
		else
			std::cout << "Invalid command:  run HELP to see available commands and it's description" << std::endl;
	}
}
