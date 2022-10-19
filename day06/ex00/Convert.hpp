/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:59:18 by osallak           #+#    #+#             */
/*   Updated: 2022/10/17 18:02:12 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONVERT__
#define __CONVERT__
#include <iostream>
#include <string>


class Convert{
    public:
        Convert( std::string _input );
        Convert( Convert const& other );
        ~Convert( void );
        Convert const& operator= (Convert const& other);

        void toChar( void ) const;
        void  toInt( void ) const;
        void toFloat( void ) const;
        void toDouble( void ) const;


        void __convert( void );

        std::string getInput( void ) const;
    private:
        bool        __isInf;
        bool        __isNan;
        std::string _input;
        double      __data;
        bool        __doublef;
};

#endif