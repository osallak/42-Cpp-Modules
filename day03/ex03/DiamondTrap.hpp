/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:57:41 by osallak           #+#    #+#             */
/*   Updated: 2022/10/01 15:18:37 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{
    private:
            std::string name;
    public:
        DiamondTrap( void );
        ~DiamondTrap( void );
        DiamondTrap( std::string name );
        DiamondTrap( const DiamondTrap& other );
        const DiamondTrap& operator= ( const DiamondTrap& other );
        void whoAmI( void );
};
