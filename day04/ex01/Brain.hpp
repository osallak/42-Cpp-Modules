/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:39:36 by osallak           #+#    #+#             */
/*   Updated: 2022/10/07 20:42:51 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>


class Brain{
    private:
            std::string ideas[100];
            int ideasCount;
    public:
            Brain( void );
            Brain( const std::string ideas[] , int ideasCount);
            Brain( const Brain& other );
            ~Brain( void );
            const Brain& operator= ( const Brain& other);
            void setIdea( std::string idea);
            const std::string& getIdea( int index ) const;
            int getIdeasCount( void ) const;
};